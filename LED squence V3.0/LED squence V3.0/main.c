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
#include "APP/APP.h"



int main(void)
{
    app_init();
	
   while(1)
   {
		app();
   }
   
   
}

