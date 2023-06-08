/*
 * interrupt.c
 *
 * Created: 4/10/2023 12:07:40 AM
 *  Author: Mohab
 */ 

#include "Interrupt.h"

uint8_t ex_int_init(uint8_t ex_int_number, uint8_t ex_int_mode)
{
	uint8_t error=0;
	Set_Bit(SREG,7);
	if(ex_int_number == Interrupt_0)
	{
		if(ex_int_mode == low_level)
		{
			Clear_Bit(MCUCR,0);
			Clear_Bit(MCUCR,1);
		}
		else if(ex_int_mode == any_logical_change)
		{
			Set_Bit(MCUCR,0);
			Clear_Bit(MCUCR,1);
		}
		else if(ex_int_mode == falling_edge)
		{
			Clear_Bit(MCUCR,0);
			Set_Bit(MCUCR,1);
		}
		else if(ex_int_mode == rising_edge)
		{
			Set_Bit(MCUCR,0);
			Set_Bit(MCUCR,1);
		}
		else
		{
			error = 1;
		}
		Set_Bit(GICR,6);
	}
	else if(ex_int_number == Interrupt_1)
	{
		if(ex_int_mode == low_level)
		{
			Clear_Bit(MCUCR,2);
			Clear_Bit(MCUCR,3);
		}
		else if(ex_int_mode == any_logical_change)
		{
			Set_Bit(MCUCR,2);
			Clear_Bit(MCUCR,3);
		}
		else if(ex_int_mode == falling_edge)
		{
			Clear_Bit(MCUCR,2);
			Set_Bit(MCUCR,3);
		}
		else if(ex_int_mode == rising_edge)
		{
			Set_Bit(MCUCR,2);
			Set_Bit(MCUCR,3);
		}
		else
		{
			error = 1;
		}
		Set_Bit(GICR,7);
	}
	else if(ex_int_number == Interrupt_2)
	{
		if(ex_int_mode == falling_edge)
		{
			Clear_Bit(MCUCSR,6);
		}
		else if(ex_int_mode == rising_edge)
		{
			Set_Bit(MCUCSR,6);
		}
		else
		{
			error=1;
		}
		Set_Bit(GICR,5);
	}
	else
	{
		error=1;
	}
	return error;
}
