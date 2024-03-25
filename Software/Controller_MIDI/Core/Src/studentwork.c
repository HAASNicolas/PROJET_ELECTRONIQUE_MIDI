/*
 * studentwork.c
 *
 *  Created on: Mar 25, 2024
 *      Author: eleve
 */

#include "studentwork.h"
extern UART_HandleTypeDef huart2;

int values[32];

void setup() {
	// Activation des ADC
	HAL_ADC_Start(&hadc1); // pour stopper l'ADC: HAL_ADC_Stop(&hadc1);
	HAL_ADC_Start(&hadc2);
	HAL_ADC_Start(&hadc3);
	HAL_ADC_Start(&hadc4);
}

void loop() {
	uint32_t ADCValue;
	for (int sel = 0; sel < 8; sel++) { // Check change of each potentiometers
		on_off_pins_sel(sel); // Sélectionne 4 potentiomètres
		// Check MUX 0
		if (HAL_ADC_PollForConversion(&hadc1, 1000000) == HAL_OK) { // Wait that MUX change their output
			ADCValue = HAL_ADC_GetValue(&hadc1); // Take ADC result
			if (ADCValue != values[sel]) {
				values[sel] = ADCValue; // Save new value
				send_new_position(sel, ADCValue); // Send new value
			}
		}
		// idem avec les autres mux
	}
	HAL_Delay(1000);
}

void on_off_pins_sel(sel) {
	// Put sels
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	//...
}

void send_new_position(ligne, colone) {
	// Send the new value by MIDI liaison
	//HAL_UART_Transmit_IT(&huart2,(uint8_t*)str,strlen(str));
}
