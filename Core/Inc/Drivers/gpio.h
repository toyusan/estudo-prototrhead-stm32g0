/*
 ******************************************************************************
 * @file       gpio.h
 * @author     Airton Y. C. Toyofuku
 * @copyright  Enablers
 * @date       Aug 23, 2023
 * @version    1.0.0
 * @brief      This file contains all the function prototypes for
 *             the gpio.c file
 ******************************************************************************
 */
#ifndef DRIVERS_GPIO_H_
#define DRIVERS_GPIO_H_
#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
// Standard C Library includes

// Standard STM32 Library

// Application includes

/* Public definitions --------------------------------------------------------*/

/* Public typedef ------------------------------------------------------------*/
typedef enum{
	GPIO_ERROR = -1,
	GPIO_OK    =  0
}GPIO_STAT;

/* Public function prototypes ------------------------------------------------*/
GPIO_STAT gpio_open(void);
GPIO_STAT gpio_close(void);

/**
 * @}
 */
#ifdef __cplusplus
}
#endif
#endif /* DRIVERS_GPIO_H_ */
