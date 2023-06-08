/*
 * Timer_0.c
 *
 * Created: 4/11/2023 9:00:42 PM
 *  Author: Mohab
 */ 

#include "Timer_0.h"

uint8_t timer0_init(uint8_t mode_of_operation, uint8_t timer_starting_value)
{
	uint8_t error=0;
	if(mode_of_operation == Normal)
	{
		Clear_Bit(TCCR0,6);
		Clear_Bit(TCCR0,3);
	}
	else if(mode_of_operation == PWM)
	{
		Set_Bit(TCCR0,6);
		Clear_Bit(TCCR0,3);
	}
	else if(mode_of_operation == CTC)
	{
		Clear_Bit(TCCR0,6);
		Set_Bit(TCCR0,3);
	}
	else if(mode_of_operation == Fast_PWM)
	{
		Set_Bit(TCCR0,6);
		Set_Bit(TCCR0,3);
	}
	else
	{
		error = 1;
	}
	TCNT0 = timer_starting_value;
	Set_Bit(SREG,7);
	Set_Bit(TIMSK,0);
	return error;
}

uint8_t start_timer0(unsigned int prescaler)
{
	uint8_t error=0;
	if(prescaler == 0)
	{
		Clear_Bit(TCCR0,0);
		Clear_Bit(TCCR0,1);
		Clear_Bit(TCCR0,2);
	}
	else if(prescaler == 1)
	{
		Set_Bit(TCCR0,0);
		Clear_Bit(TCCR0,1);
		Clear_Bit(TCCR0,2);
	}
	else if(prescaler == 8)
	{
		Clear_Bit(TCCR0,0);
		Set_Bit(TCCR0,1);
		Clear_Bit(TCCR0,2);
	}
	else if(prescaler == 64)
	{
		Set_Bit(TCCR0,0);
		Set_Bit(TCCR0,1);
		Clear_Bit(TCCR0,2);
	}
	else if(prescaler == 256)
	{
		Clear_Bit(TCCR0,0);
		Clear_Bit(TCCR0,1);
		Set_Bit(TCCR0,2);
	}
	else if(prescaler == 1024)
	{
		Set_Bit(TCCR0,0);
		Clear_Bit(TCCR0,1);
		Set_Bit(TCCR0,2);
	}
	else
	{
		error=1;
	}
	return error;
}