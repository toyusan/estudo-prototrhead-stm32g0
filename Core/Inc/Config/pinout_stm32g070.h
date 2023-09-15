/*
 ******************************************************************************
 * @file       pinout_stm32g070.h      
 * @author     Airton Y. C. Toyofuku
 * @copyright  Enablers
 * @date       Aug 23, 2023
 * @version    1.0.0
 * @brief     Header file containing the mapping of the microcontroller pins
 ******************************************************************************
 */
#ifndef INC_CONFIG_PINOUT_STM32G070_H_
#define INC_CONFIG_PINOUT_STM32G070_H_
#ifdef __cplusplus
extern "C" {
#endif

#ifdef STM32G070
/* Includes ------------------------------------------------------------------*/

/* Public definitions --------------------------------------------------------*/
/******************************* Base hardware *********************************
 * +---------------------------------------------------------------------------+
 * | Function       | Pin   | Notes                                            |
 * +---------------------------------------------------------------------------+
 * | USART1_RX      | PB07  | USART to communicate with the MCU HOST           |
 * | USART1_TX      | PB06  | USART to communicate with the MCU HOST           |
 * | GPIO1          | PA00  | General Purpose IO                               |
 * | GPIO2          | PA01  | General Purpose IO                               |
 * | GPIO3          | PA03  | General Purpose IO                               |
 * +---------------------------------------------------------------------------+
 ******************************************************************************/
//----------------------------------------------------------------------------*/
// USART interface to communicate with the HOST MCU                           */
//----------------------------------------------------------------------------*/
#define USART1_RX_Pin           GPIO_PIN_7
#define USART1_TX_Pin           GPIO_PIN_6
#define USART1_TX_RX_GPIO_Port  GPIOB
#define USART1_ALTERNATE        GPIO_AF0_USART1

#define USART1_GPIO_CLOCK(x)    __HAL_RCC_GPIOB_CLK_##x()
#define USART1_CLOCK(x)        __HAL_RCC_USART1_CLK_##x()

#define USART1_INSTANCE        USART1
#define USART1_NVIC            USART1_IRQn
#define USART1_IRQ_HANDLER     USART1_IRQHandler

//----------------------------------------------------------------------------*/
// General Purpose Input/Output Interface                                     */
//----------------------------------------------------------------------------*/
#define GPIO1_Pin             GPIO_PIN_0
#define GPIO2_Pin             GPIO_PIN_1
#define GPIO3_Pin             GPIO_PIN_3
#define GPIO7_Pin             GPIO_PIN_1

#define GPIO1_GPIO_Port       GPIOA
#define GPIO2_GPIO_Port       GPIOA
#define GPIO3_GPIO_Port       GPIOA
#define GPIO7_GPIO_Port       GPIOB

#define GPIOS_GPIO1_CLOCK(x)   __HAL_RCC_GPIOA_CLK_##x();
#define GPIOS_GPIO2_CLOCK(x)   __HAL_RCC_GPIOA_CLK_##x();
#define GPIOS_GPIO3_CLOCK(x)   __HAL_RCC_GPIOA_CLK_##x();
#define GPIOS_GPIO7_CLOCK(x)   __HAL_RCC_GPIOB_CLK_##x();

#define GPIO1_ADC_CHANNEL     ADC_CHANNEL_0
#define GPIO2_ADC_CHANNEL     ADC_CHANNEL_1
#define GPIO3_ADC_CHANNEL     ADC_CHANNEL_3

/**
 * @}
 */
#ifdef __cplusplus
}
#endif
#endif
#endif /* INC_CONFIG_PINOUT_STM32G070_H_ */
