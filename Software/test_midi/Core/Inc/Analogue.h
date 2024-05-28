/*
 * Analogue.h
 *
 *  Created on: Apr 29, 2024
 *      Author: eleve
 */

#include <stdio.h>
#include <stdlib.h>
#include <midi.h>

#ifndef INC_ANALOGUE_H_
#define INC_ANALOGUE_H_


void Analogue_init(void);
void Analogue_irq_callback(void);
void Analogue_process(void);
void edit_sel_pots(void);

#endif /* INC_ANALOGUE_H_ */