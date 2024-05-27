/*
 * Analogue.c
 *
 *  Created on: Apr 29, 2024
 *      Author: eleve
 */

#include <stm32g4xx_hal.h>
#include "Analogue.h"
extern ADC_HandleTypeDef hadc1;
extern TIM_HandleTypeDef htim6;

int adc_available = 0; // Indique si l'ADC à fini la conversion Analog->Digital
uint16_t adc_tab[4];
uint8_t values[32] = {0};
int sel = 0; // Sélection des 4 potentiomètres pour les MUX_Analogiques

void Analogue_init(void)
{
	edit_sel_pots();
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_tab, 4); // Active l'ADC
	HAL_TIM_Base_Start(&htim6); // Appel la fonction Analogue_irq_callback() quand la conversion Analog->Digital est finie
}

void Analogue_irq_callback(void)
{
	adc_available = 1; // Indique que la conversion Analog->Digital est finie
}

void Analogue_process(void)
{
	if (adc_available == 1) // Si l'ADC a convertit la tension en numérique
	{
		printf("%u\t", sel);
		for(int itr = 0 ; itr < 4 ; itr++) // Affiche les valeurs numérique des 4 potentiomètres
		{
			uint8_t numero_potard = itr + (sel * 4);
			uint8_t new_value = adc_tab[itr]/32;
			printf("%u\t", new_value);
			if (values[numero_potard] != new_value) { // Regarde si la position du potentiomètre a changée
				values[numero_potard] = new_value; // Enregistre la nouvelle valeur
				send_new_value(numero_potard, new_value); // envoyer la nouvelle valeur via l'UART et l'USB
			}
		}
		printf("\r\n");

		// Modifie les 4 potentiomètres sélectionnés
		if (sel == 7) {
			sel = 0;
		} else {
			sel += 1;
		}
		edit_sel_pots();

		adc_available = 0;
	}
}

void edit_sel_pots() { // Modifie les 4 potentiomètres sélectionnés par les MUX_Analogiques
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, sel & 0b1); // sel0
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, sel & 0b10); // sel1
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, sel & 0b100); // sel2
}

