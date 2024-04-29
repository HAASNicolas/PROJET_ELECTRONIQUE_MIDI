/*
 * MIDI_CONTROLLER.c
 *
 *  Created on: Apr 29, 2024
 *      Author: eleve
 */
#include <stm32g4xx_hal.h>

void setup(){}
void loop (){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,0);
	HAL_Delay(250);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,1);
	HAL_Delay(250);
}
