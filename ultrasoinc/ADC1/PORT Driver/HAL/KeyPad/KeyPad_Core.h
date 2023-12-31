
/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  KEYPAD_CORE_H_
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/

#ifndef KEYPAD_CORE_H_
#define KEYPAD_CORE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "KeyPad_LCFG.h"
#include "DIO_Core.h"

#define F_CPU 16000000U
#include <util/delay.h>

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


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
void KeyPad_Init(void);
uint8 KeyPad_GetValue (void);

#endif /* KEYPAD_CORE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: KEYPAD_CORE_H_
 *********************************************************************************************************************/




