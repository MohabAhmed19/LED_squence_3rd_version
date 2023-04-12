/*
 * Push_bottun.h
 *
 * Created: 4/6/2023 8:25:24 AM
 *  Author: mohab
 */ 


#ifndef PUSH_BOTTUN_H_
#define PUSH_BOTTUN_H_


#include "../../utils/STD_TYPES.h"
#include "../../utils/registers.h"
#include "../../utils/utilities.h"
#include "../../MCAL/DIO/DIO.h"

#define Pressed 1
#define Not_pressed 0

uint8_t PB_init(uint8_t Port_number, uint8_t Pin_number);
uint8_t PB_state(uint8_t Port_number, uint8_t Pin_number, uint8_t *state);


#endif /* PUSH_BOTTUN_H_ */