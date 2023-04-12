/*
 * Interrupt.h
 *
 * Created: 4/9/2023 11:45:27 PM
 *  Author: Mohab
 */ 



#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../utils/STD_TYPES.h"
#include "../../utils/registers.h"
#include "../../utils/utilities.h"


#define low_level 3
#define any_logical_change 4
#define falling_edge 5
#define rising_edge 6

#define Interrupt_0 0
#define Interrupt_1 1
#define Interrupt_2 2

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)

uint8_t ex_int_init(uint8_t ex_int_number, uint8_t ex_int_mode);




#endif /* INTERRUPT_H_ */