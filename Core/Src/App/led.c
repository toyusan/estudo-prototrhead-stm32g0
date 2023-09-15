/*
 *************************************************************************
 * @file		led.c
 * @author   	Airton Y. C. Toyofuku
 * @copyright	Toyotech
 * @date		Aug 23, 2023
 * @version		1.0.0
 * @brief       Source file for the led activity
 *************************************************************************
 */

/* Includes ************************************************************/
// Standard C Library includes
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

// Config includes
#include "sysconfig.h"
#include "simple_timer.h"
#include "led.h"

/* Definitions *********************************************************/

/* Typedefs ************************************************************/

/* Variables ***********************************************************/
static timer timer1, timer2, timer3, timer7;

/* Function Protoypes **************************************************/


/* Public Functions ****************************************************/
/**
 * @brief  Open led.
 * @param  [in] None.
 * @retval Status error. 0 if ok.
 */
LED_STAT led_open(void){

	GPIO_InitTypeDef GPIO_InitStruct = {
			.Mode = GPIO_MODE_OUTPUT_PP,
			.Pull = GPIO_NOPULL,
			.Speed = GPIO_SPEED_FREQ_LOW
	};

	// Enable the LED GPIO Clock
	//LED_01_CLK_En; LED_02_CLK_En; LED_03_CLK_En; LED_07_CLK_En

	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();

	// Configure GPIO pin Output Level
	LED_01_OFF; LED_02_OFF; LED_03_OFF; LED_07_OFF;

	//Configure LED Pins
	GPIO_InitStruct.Pin = LED_01_Pin;
	HAL_GPIO_Init(LED_01_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = LED_02_Pin;
	HAL_GPIO_Init(LED_02_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = LED_03_Pin;
	HAL_GPIO_Init(LED_03_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = LED_07_Pin;
	HAL_GPIO_Init(LED_07_Port, &GPIO_InitStruct);

	return LED_OK;
}

/**
 * @brief  Close led.
 * @param  [in] None.
 * @retval Status error. 0 if ok.
 */
LED_STAT led_close (void){

	// Deinit GPIO pins
	HAL_GPIO_DeInit(LED_01_Port, LED_01_Pin | LED_02_Pin | LED_03_Pin);
	return LED_OK;
}

/*
 * @brief Protothread to blink the Led 01
 * @param struct to the ptotothread control
 * @return none
 */
//static int PT_THREAD(blinkLed01(struct pt *pt)){
int blinkLed01(struct pt *pt){
	PT_BEGIN(pt);
	//(void)PT_YIELD_FLAG;

	LED_01_OFF;

	while(true) {
		LED_01_ON;
		timer_set(&timer1, 500);
		PT_WAIT_UNTIL(pt, timer_expired(&timer1));

		LED_01_OFF;
		timer_set(&timer1, 500);
		PT_WAIT_UNTIL(pt, timer_expired(&timer1));

		//trace_printf("blinkLed01 running\r\n");
	}

	PT_END(pt);
}

/*
 * @brief Protothread to blink the Led 02
 * @param struct to the ptotothread control
 * @return none
 */
//static int PT_THREAD(blinkLed02(struct pt *pt)){
int blinkLed02(struct pt *pt){
	PT_BEGIN(pt);
	(void)PT_YIELD_FLAG;

	LED_02_OFF;

	while(true) {
		LED_02_ON;
		timer_set(&timer2, 250);
		PT_WAIT_UNTIL(pt, timer_expired(&timer2));

		LED_02_OFF;
		timer_set(&timer2, 250);
 		PT_WAIT_UNTIL(pt, timer_expired(&timer2));

		//trace_printf("blinkLed02 running\r\n");
	}

	PT_END(pt);
}

/*
 * @brief Protothread to blink the Led 03
 * @param struct to the ptotothread control
 * @return none
 */
//static int PT_THREAD(blinkLed03(struct pt *pt)){
int blinkLed03(struct pt *pt){
	PT_BEGIN(pt);
	(void)PT_YIELD_FLAG;

	LED_03_OFF;

	while(true) {
		LED_03_ON;
		timer_set(&timer3, 125);
		PT_WAIT_UNTIL(pt, timer_expired(&timer3));

		LED_03_OFF;
		timer_set(&timer3, 125);
		PT_WAIT_UNTIL(pt, timer_expired(&timer3));

		//trace_printf("blinkLed03 running\r\n");
	}

	PT_END(pt);
}

/*
 * @brief Protothread to blink the Led 07
 * @param struct to the ptotothread control
 * @return none
 */
//static int PT_THREAD(blinkLed03(struct pt *pt)){
int blinkLed07(struct pt *pt){
	PT_BEGIN(pt);
	(void)PT_YIELD_FLAG;

	LED_07_OFF;

	while(true) {
		LED_07_ON;
		timer_set(&timer7, 1000);
		PT_WAIT_UNTIL(pt, timer_expired(&timer7));

		LED_07_OFF;
		timer_set(&timer7, 1000);
		PT_WAIT_UNTIL(pt, timer_expired(&timer7));

		//trace_printf("blinkLed03 running\r\n");
	}

	PT_END(pt);
}
/* Private Functions ***************************************************/


