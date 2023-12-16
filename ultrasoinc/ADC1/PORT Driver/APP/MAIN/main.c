/*
 * Button with LEDs.c
 *
 * Created: 9/12/2023 9:45:35 PM
 * Author : amgad atef
 */ 


#include "PORT_Core.h"
#include "LCD_Core.h"
#include "KeyPad_Core.h"
#include "LED_Core.h"
#include <avr/interrupt.h> // we will understand but not today
#include "IRQH_Core.h"
#include "SevenSegment_Core.h"
#include "ADC_Core.h"
#include "GPT_core.h"
#include "PWM_core.h"
#include "DC_MOTOR_CORE.h"
#include "ultrasonic_core.h"

extern uint32 ADC_Vin_Value_mv;

int main(void)
{
	uint32 DISTANCE =0;

   PORT_Init();
 IRQH_SetGlobalInterrupts(INTERRUPT_ENABLE);
 GPT_INIT();
 ICU_INIT();
 LCD_Init();


   while (1)
   {
	   LCD_GoTo(0,1);
	   LCD_WriteString("DIstance:");
	   ultrasonic_trigger();
	   DISTANCE=ultrasonic_calculateDistance();
		   LCD_GoTo(0,11);
		   LCD_WriteInteger(DISTANCE);
		   _delay_ms(500);
		  LCD_Clear();
		  
		  
		
	   
   }
}

