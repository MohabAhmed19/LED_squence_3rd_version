/*
 * registers.h
 *
 * Created: 4/6/2023 6:56:32 AM
 *  Author: Mohab
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_


#include "STD_TYPES.h"

#define PORTA *((volatile uint8_t *) 0x3B)
#define DDRA *((volatile uint8_t *) 0x3A)
#define PINA *((volatile uint8_t *) 0x39)

#define PORTB *((volatile uint8_t *) 0x38)
#define DDRB *((volatile uint8_t *) 0x37)
#define PINB *((volatile uint8_t *) 0x36)

#define PORTC *((volatile uint8_t *) 0x35)
#define DDRC *((volatile uint8_t *) 0x34)
#define PINC *((volatile uint8_t *) 0x33)

#define PORTD *((volatile uint8_t *) 0x32)
#define DDRD *((volatile uint8_t *) 0x31)
#define PIND *((volatile uint8_t *) 0x30)

#define SREG *((volatile uint8_t *) 0x5f)
#define MCUCR *((volatile uint8_t *) 0x55)
#define MCUCSR *((volatile uint8_t *) 0x54)
#define GICR *((volatile uint8_t *) 0x5B)

#define TCCR0 *((volatile uint8_t *) 0x53)
#define TCNT0 *((volatile uint8_t *) 0x52)
#define TIMSK *((volatile uint8_t *) 0x59)




#endif /* REGISTERS_H_ */