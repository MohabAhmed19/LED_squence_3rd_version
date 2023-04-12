/*
 * LED sequence V3.0.c
 *
 * Created: 4/11/2023 8:45:54 PM
 * Author : Mohab
 */ 

#include "utils/registers.h"
#include "utils/STD_TYPES.h"
#include "utils/utilities.h"
#include "ECUAL/LED/LED.h"
#include "ECUAL/Push_button/Push_button.h"
#include "ECUAL/Delay/Delay.h"

uint8_t Blink_state=1;
uint8_t PB0_state=0;

int main(void)
{
    LED_init(Port_A, PIN_0);
	LED_init(Port_A, PIN_1);
	LED_init(Port_A, PIN_2);
	LED_init(Port_A, PIN_3);
	ex_int_init(Interrupt_0,rising_edge);
	ex_int_init(Interrupt_1,rising_edge);
	
   while(1)
   {
		switch(Blink_state)
		{
			case 1:
			if(PB0_state==0)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
			}
			else if(PB0_state==1)
			{
				LED_ON(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			else if(PB0_state==2)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			else if(PB0_state==3)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			else if(PB0_state==4)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			else if(PB0_state==5)
			{
				LED_OFF(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			else if(PB0_state==6)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			else if(PB0_state==7)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_100ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_900ms();
			}
			break;
			case 2:
			if(PB0_state==0)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
			}
			else if(PB0_state==1)
			{
				LED_ON(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			else if(PB0_state==2)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			else if(PB0_state==3)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			else if(PB0_state==4)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			else if(PB0_state==5)
			{
				LED_OFF(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			else if(PB0_state==6)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			else if(PB0_state==7)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_200ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
			}
			break;
			case 3:
			if(PB0_state==0)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
			}
			else if(PB0_state==1)
			{
				LED_ON(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			else if(PB0_state==2)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			else if(PB0_state==3)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			else if(PB0_state==4)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			else if(PB0_state==5)
			{
				LED_OFF(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			else if(PB0_state==6)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			else if(PB0_state==7)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_300ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_700ms();
			}
			break;
			case 4:
			if(PB0_state==0)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
			}
			else if(PB0_state==1)
			{
				LED_ON(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			else if(PB0_state==2)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			else if(PB0_state==3)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			else if(PB0_state==4)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			else if(PB0_state==5)
			{
				LED_OFF(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			else if(PB0_state==6)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			else if(PB0_state==7)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_500ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_500ms();
			}
			break;
			case 5:
			if(PB0_state==0)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
			}
			else if(PB0_state==1)
			{
				LED_ON(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			else if(PB0_state==2)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			else if(PB0_state==3)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			else if(PB0_state==4)
			{
				LED_ON(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			else if(PB0_state==5)
			{
				LED_OFF(Port_A, PIN_0);
				LED_ON(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			else if(PB0_state==6)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_ON(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			else if(PB0_state==7)
			{
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_ON(Port_A, PIN_3);
				delay_800ms();
				LED_OFF(Port_A, PIN_0);
				LED_OFF(Port_A, PIN_1);
				LED_OFF(Port_A, PIN_2);
				LED_OFF(Port_A, PIN_3);
				delay_200ms();
			}
			break;
		}
   }
   
   
}

ISR(__vector_1)
{
	if(PB0_state<7)
		PB0_state++;
	else
	PB0_state=0;
}

ISR(__vector_2)
{
	if(Blink_state<5)
	Blink_state++;
	else
	Blink_state=1;
}