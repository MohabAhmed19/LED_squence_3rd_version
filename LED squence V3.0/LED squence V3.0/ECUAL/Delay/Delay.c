/*
 * Delay.c
 *
 * Created: 4/12/2023 11:18:02 PM
 *  Author: Mohab
 */ 

#include "Delay.h"

unsigned int timer;

void delay_100ms(void)
{
	timer=0;
	timer0_init(Normal, 44);
	start_timer0(8);
	while(timer < 49);
}

void delay_900ms(void)
{
	timer=0;
	timer0_init(Normal, 140);
	start_timer0(8);
	while(timer < 440);
}

void delay_200ms(void)
{
	timer=0;
	timer0_init(Normal, 203);
	start_timer0(64);
	while(timer < 13);
}

void delay_800ms(void)
{
	timer=0;
	timer0_init(Normal, 203);
	start_timer0(256);
	while(timer < 13);
}

void delay_300ms(void)
{
	timer=0;
	timer0_init(Normal, 132);
	start_timer0(8);
	while(timer < 147);
}

void delay_700ms(void)
{
	timer=0;
	timer0_init(Normal, 52);
	start_timer0(8);
	while(timer < 342);
}

void delay_500ms(void)
{
	timer=0;
	timer0_init(Normal, 220);
	start_timer0(8);
	while(timer < 245);
}


ISR(__vector_11)
{
	timer++;
}