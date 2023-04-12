/*
 * DIO.h
 *
 * Created: 4/6/2023 7:15:48 AM
 *  Author: mohab
 */ 


#ifndef DIO_H_
#define DIO_H_


#include "../../utils/STD_TYPES.h"
#include "../../utils/registers.h"
#include "../../utils/utilities.h"

#define Port_A 'A'
#define Port_B 'B'
#define Port_C 'C'
#define Port_D 'D'

#define PIN_0 0
#define PIN_1 1
#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5
#define PIN_6 6
#define PIN_7 7

#define in 0
#define out 1

#define high 1
#define low 0

uint8_t DIO_init(uint8_t PORTNumber, uint8_t PinNumber, uint8_t direction);
uint8_t DIO_write(uint8_t PORTNumber, uint8_t PinNumber, uint8_t value);
uint8_t DIO_toggle(uint8_t PORTNumber, uint8_t PinNumber);
uint8_t DIO_read(uint8_t PORTNumber, uint8_t PinNumber, uint8_t *state);


#endif /* DIO_H_ */