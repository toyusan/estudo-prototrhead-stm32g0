/*
*************************************************************************
* @file			sysconfig.h
* @author   	Airton Toyofuku
* @copyright	Enablers
* @date			Aug 23, 2023
* @version		1.0.0
* @brief        System configuration header file
*************************************************************************
*/
#ifndef INC_CONFIG_SYSCONFIG_H_
#define INC_CONFIG_SYSCONFIG_H_

#ifdef __cplusplus
#extern "C"{
#endif

/* Includes ------------------------------------------------------------------*/
// Hardware includes
#include "board.h"

// Middlewares includes

// Driver includes
#include "gpio.h"

// Misc and Utils includes
#include "pt.h"

/* Public definitions --------------------------------------------------------*/

//----------------------------------------------------------------------------*/
// Boolean state definitions                                                  */
//----------------------------------------------------------------------------*/
#define TRUE  true
#define FALSE false

//----------------------------------------------------------------------------*/
// Time Definitions                                                           */
//----------------------------------------------------------------------------*/
#define ONE_SEC      (1000)         // milliseconds based on HAL_Delay tick
#define ONE_MIN      (60 * ONE_SEC) // milliseconds based on HAL_Delay tick
#define ONE_HOUR     (60 * ONE_MIN) // milliseconds based on HAL_Delay tick

/**
 *@}
 */
#ifdef __cplusplus
}
#endif
#endif /* INC_CONFIG_SYSCONFIG_H_ */
