/*
 * Push_bottun.c
 *
 * Created: 4/6/2023 8:25:48 AM
 *  Author: Mohab
 */ 

#include "Push_button.h"


uint8_t PB_init(uint8_t Port_number, uint8_t Pin_number)
{
	DIO_init(Port_number, Pin_number, in);
	return 0;
}

uint8_t PB_state(uint8_t Port_number, uint8_t Pin_number, uint8_t *state)
{
	uint8_t error = 0;
	if(DIO_read(Port_number, Pin_number, state) ==0)
	{
		error=0;
	}
	else
	{
		error=1;
	}
	return error;
}
