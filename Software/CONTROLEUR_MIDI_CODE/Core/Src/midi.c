/*
 * midi.c
 *
 *  Created on: May 13, 2024
 *      Author: eleve
 */

#include <stm32g4xx_hal.h>
#include <midi.h>
extern UART_HandleTypeDef huart1;

void send_new_value(uint8_t num_pot, uint8_t new_value) {
	// Envoyer en MIDI via l'UART
	uint8_t id = 0x1A;
	HAL_UART_Transmit(&huart1, &id, 1, HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart1, &num_pot, 1, HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart1, &new_value, 1, HAL_MAX_DELAY);


	// Envoyer en MIDI via l'USB
	// ...
}
