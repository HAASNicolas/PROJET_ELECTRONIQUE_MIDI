/*
 * midi.c
 *
 *  Created on: May 13, 2024
 *      Author: eleve
 */

#include <stm32g4xx_hal.h>
#include <midi.h>
extern UART_HandleTypeDef huart1;

void send_new_value(int num_pot, uint16_t new_value) {
	// Envoyer en MIDI via l'UART
	uint8_t id = 254;
	HAL_UART_Transmit(&huart1, &id, 1, HAL_MAX_DELAY);
	HAL_Delay(100);/*
	HAL_UART_Transmit(&huart1, &num_pot, 1, 1000);
	HAL_Delay(10);
	HAL_UART_Transmit(&huart1, &new_value, 2, 1000);
	HAL_Delay(10);*/


	// Envoyer en MIDI via l'USB
	// ...
}
