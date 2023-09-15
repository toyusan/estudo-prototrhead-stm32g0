/*
*************************************************************************
* @file			board.h
* @author   	Airton
* @copyright	Enablers
* @date			Aug 23, 2023
* @version		1.0.0
* @brief        Header file to select the mcu and specific setup
*************************************************************************
*/
#ifndef INC_CONFIG_BOARD_H_
#define INC_CONFIG_BOARD_H_

#ifdef __cplusplus
#extern "C"{
#endif
/* Includes ------------------------------------------------------------------*/

/* Public definitions --------------------------------------------------------*/
#ifdef STM32G070

    #include "stm32g0xx_hal.h"    // Standard STM32 Library
	#include "pinout_stm32g070.h" // Pinout Map for the stm32l476 chip

    #define  MCU_USED "STM32G070" // String defining the mcu used into the board
    #define  H_MCU	  (1)
#else
	#error "ERROR: a MCU must be selected"
#endif

//----------------------------------------------------------------------------*/
// XTAL Configurations                                                        */
//----------------------------------------------------------------------------*/
#define USE_LSI (1)          // RTC working with the internal oscillator
#define USE_1HZ (1)          // RTC working with 1Hz clock

//----------------------------------------------------------------------------*/
// Computer Application communication Interface                               */
//----------------------------------------------------------------------------*/
#define HOST_USART  (1)

#define HOST_USART_GPIO_CLOCK(x)	    USART1_GPIO_CLOCK(x)
#define HOST_USART_GPIO_PIN_TX 		    USART1_TX_Pin
#define HOST_USART_GPIO_PIN_RX 		    USART1_RX_Pin
#define HOST_USART_GPIO_PORT			USART1_TX_RX_GPIO_Port
#define HOST_USART_GPIO_ALTERNATE 	    USART1_ALTERNATE
#define HOST_USART_CLOCK(x)	 	        USART1_CLOCK(x)
#define HOST_USART_INSTANCE 		    USART1_INSTANCE
#define HOST_USART_BAUDRATE 		    115200
#define HOST_USART_NVIC			        USART1_NVIC
#define HOST_USART_IRQ_HANDLER          USART1_IRQ_HANDLER

//----------------------------------------------------------------------------*/
// LED Interface                                                              */
//----------------------------------------------------------------------------*/
#define LED_01_Pin                 GPIO1_Pin
#define LED_01_Port                GPIO1_GPIO_Port
#define LED_01_CHN                 GPIO1_ADC_CHANNEL
#define LED_01_CLK_En              GPIOS_GPIO1_CLOCK(ENABLE)
#define LED_01_ON         	       LED_01_Port->BSRR = LED_01_Pin
#define LED_01_OFF         	       LED_01_Port->BRR  = LED_01_Pin

#define LED_02_Pin                 GPIO2_Pin
#define LED_02_Port                GPIO2_GPIO_Port
#define LED_02_CHN                 GPIO2_ADC_CHANNEL
#define LED_02_CLK_En              GPIOS_GPIO2_CLOCK(ENABLE)
#define LED_02_ON         	       LED_02_Port->BSRR = LED_02_Pin
#define LED_02_OFF         	       LED_02_Port->BRR  = LED_02_Pin

#define LED_03_Pin                 GPIO3_Pin
#define LED_03_Port                GPIO3_GPIO_Port
#define LED_03_CHN                 GPIO3_ADC_CHANNEL
#define LED_03_CLK_En              GPIOS_GPIO3_CLOCK(ENABLE)
#define LED_03_ON         	       LED_03_Port->BSRR = LED_03_Pin
#define LED_03_OFF         	       LED_03_Port->BRR  = LED_03_Pin

#define LED_07_Pin                 GPIO7_Pin
#define LED_07_Port                GPIO7_GPIO_Port
#define LED_07_CLK_En              GPIOS_GPIO7_CLOCK(ENABLE)
#define LED_07_ON         	       LED_07_Port->BSRR = LED_07_Pin
#define LED_07_OFF         	       LED_07_Port->BRR  = LED_07_Pin
/**
 *@}
 */
#ifdef __cplusplus
}
#endif
#endif /* INC_CONFIG_BOARD_H_ */
