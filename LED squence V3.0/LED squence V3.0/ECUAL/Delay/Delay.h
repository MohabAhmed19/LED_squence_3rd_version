/*
 * Delay.h
 *
 * Created: 4/12/2023 11:17:45 PM
 *  Author: Mohab
 */ 


#ifndef DELAY_H_
#define DELAY_H_

#include "../../utils/STD_TYPES.h"
#include "../../utils/registers.h"
#include "../../utils/utilities.h"
#include "../../MCAL/Interrupt/Interrupt.h"
#include "../../MCAL/Timer_0/Timer_0.h"


int delay_100ms(void);
int delay_900ms(void);
int delay_200ms(void);
int delay_800ms(void);
int delay_300ms(void);
int delay_700ms(void);
int delay_500ms(void);

#endif /* DELAY_H_ */