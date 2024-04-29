/*
 * Analogue.c
 *
 *  Created on: Apr 29, 2024
 *      Author: eleve
 */

#include "Analogue.h"

int adc_available = 0;
uint16_t adc_tab[4];

void Analogue_init(void)
{
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_tab, 4);
	HAL_TIM_Base_Start(&htim6);
}

void Analogue_irq_callback(void)
{
	adc_available == 1;
}

void Analogue_process(void)
{
	if (adc_available == 1)
	{
		adc_available = 0;
		for(int itr = 0 ; itr < 4 ; itr++)
		{
			printf("%u\t", adc_tab[itr]);
		}
		printf("\r\n");
	}
}
