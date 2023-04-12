/*
 * LED.c
 *
 * Created: 4/6/2023 8:26:35 AM
 *  Author: Mohab
 */ 


#include "LED.h"

unsigned int timer = 0;



uint8_t LED_init(uint8_t Port_number, uint8_t Pin_number)
{
	uint8_t error=0;
	if(DIO_init(Port_number, Pin_number, out) == 0 )
	{
		error=0;
	}
	else
	{
		error=1;
	}
	return error;
}


uint8_t LED_ON(uint8_t Port_number, uint8_t Pin_number)
{
	uint8_t error=0;
	if(DIO_write(Port_number, Pin_number, high) == 0)
	{
		error=0;
	}
	else
	{
		error=1;
	}
	return error;
}

uint8_t LED_OFF(uint8_t Port_number, uint8_t Pin_number)
{
	uint8_t error=0;
	if(DIO_write(Port_number, Pin_number, low) == 0)
	{
		error=0;
	}
	else
	{
		error=1;
	}
	return error;
}

