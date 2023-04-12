/*
 * LED.h
 *
 * Created: 4/6/2023 8:26:21 AM
 *  Author: Mohab
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../utils/STD_TYPES.h"
#include "../../utils/registers.h"
#include "../../utils/utilities.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/Interrupt/Interrupt.h"
#include "../../MCAL/Timer_0/Timer_0.h"

uint8_t LED_init(uint8_t Port_number, uint8_t Pin_number);
uint8_t LED_ON(uint8_t Port_number, uint8_t Pin_number);
uint8_t LED_OFF(uint8_t Port_number, uint8_t Pin_number);
uint8_t LED_blink_1(uint8_t Port_number, uint8_t Pin_Number);
uint8_t LED_blink_2(uint8_t Port_number, uint8_t Pin_Number);
uint8_t LED_blink_3(uint8_t Port_number, uint8_t Pin_Number);
uint8_t LED_blink_4(uint8_t Port_number, uint8_t Pin_Number);
uint8_t LED_blink_5(uint8_t Port_number, uint8_t Pin_Number);

#endif /* LED_H_ */