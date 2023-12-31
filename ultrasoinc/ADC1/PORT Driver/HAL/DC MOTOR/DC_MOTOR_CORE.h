/*
 * DC_MOTOR_CORE.h
 *
 * Created: 10/27/2023 10:50:35 AM
 *  Author: DELL
 */ 


#ifndef DC_MOTOR_CORE_H_
#define DC_MOTOR_CORE_H_

/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "PWM_core.h"
#include "DIO_Core.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define  clock_wise  1
#define counter_clock_wise  0


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

void DCmotor_init(void);
void Dcmotor_setspeed(uint8 speed);
void Dcmotor_setdirection(uint8 Dir);
void Dcmotor_stop(void);
/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/




#endif /* DC_MOTOR_CORE_H_ */