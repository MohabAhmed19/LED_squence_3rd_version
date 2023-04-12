/*
 * DIO.c
 *
 * Created: 4/6/2023 7:16:03 AM
 *  Author: Mohab
 */ 

#include "DIO.h"

uint8_t DIO_init(uint8_t PORTNumber, uint8_t PinNumber, uint8_t direction)
{
	uint8_t error=0;
	switch(PORTNumber)
	{
		uint8_t error=0;
		case Port_A:
			if(direction == in)
			Clear_Bit(DDRA,PinNumber);
			else if(direction == out)
			Set_Bit(DDRA,PinNumber);
			else
			error=1;
			break;
		case Port_B:
			if(direction == in)
			Clear_Bit(DDRB,PinNumber);
			else if(direction == out)
			Set_Bit(DDRB,PinNumber);
			else
			error=1;
			break;
		case Port_C:
			if(direction == in)
			Clear_Bit(DDRC,PinNumber);
			else if(direction == out)
			Set_Bit(DDRC,PinNumber);
			else
			error=1;
			break;
		case Port_D:
			if(direction == in)
			Clear_Bit(DDRD,PinNumber);
			else if(direction == out)
			Set_Bit(DDRD,PinNumber);
			else
			error=1;
			break;
			default:
			error=1;
	}
	return error;
}
	
	uint8_t DIO_write(uint8_t PORTNumber, uint8_t PinNumber, uint8_t value)
	{
		uint8_t error=0;
		switch(PORTNumber)
		{
			uint8_t error=0;
			case Port_A:
				if(value == low)
				Clear_Bit(PORTA,PinNumber);
				else if(value == high)
				Set_Bit(PORTA,PinNumber);
				else
				error=1;
				break;
			case Port_B:
				if(value == low)
				Clear_Bit(PORTB,PinNumber);
				else if(value == high)
				Set_Bit(PORTB,PinNumber);
				else
				error=1;
				break;
			case Port_C:
				if(value == low)
				Clear_Bit(PORTC,PinNumber);
				else if(value == high)
				Set_Bit(PORTC,PinNumber);
				else
				error=1;
				break;
			case Port_D:
				if(value == low)
				Clear_Bit(PORTD,PinNumber);
				else if(value == high)
				Set_Bit(PORTD,PinNumber);
				else
				error=1;
				break;
				default:
				error=1;
		}
		return error;
	}


uint8_t DIO_toggle(uint8_t PORTNumber, uint8_t PinNumber)
{
	uint8_t error=0;
	switch(PORTNumber)
	{
		uint8_t error=0;
		case Port_A:
			Toggle_Bit(PORTA,PinNumber);
			break;
		case Port_B:
			Toggle_Bit(PORTB,PinNumber);
			break;
		case Port_C:
			Toggle_Bit(PORTC,PinNumber);
			break;
		case Port_D:
			Toggle_Bit(PORTD,PinNumber);
			break;
		default:
			error=1;
	}
	return error;
}

uint8_t DIO_read(uint8_t PORTNumber, uint8_t PinNumber, uint8_t *state)
{
	uint8_t error=0;
	
	switch(PORTNumber)
	{
		case Port_A:
			Clear_Bit(PORTA, PinNumber);
			*state=Find_Bit(PINA,PinNumber);
			break;
		case Port_B:
			Clear_Bit(PORTB, PinNumber);
			*state=Find_Bit(PINB,PinNumber);
			break;
		case Port_C:
			Clear_Bit(PORTC, PinNumber);
			*state=Find_Bit(PINC,PinNumber);
			break;
		case Port_D:
			Clear_Bit(PORTD, PinNumber);
			*state=Find_Bit(PIND,PinNumber);
			break;
		default:
			error=1;
	}
	
	return error;
}