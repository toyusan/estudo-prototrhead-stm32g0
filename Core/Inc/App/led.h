/*
*************************************************************************
* @file			led.h
* @author   	Airton Y. C. Toyofuku
* @copyright	Enablers
* @date			Aug 23, 2023
* @version		1.0.0
* @brief        header file for the led activity
*************************************************************************
*/
#ifndef INC_APP_LED_H_
#define INC_APP_LED_H_

#ifdef __cplusplus
#extern "C"{
#endif

#include "pt.h"

/* Public typedef ------------------------------------------------------------*/

// Functions returns
typedef enum{
	LED_ERROR     = -1,
	LED_OK        =  0,
	LED_EVT_EMPTY = 1
}LED_STAT;

/* Public function prototypes ------------------------------------------------*/
LED_STAT led_open   (void);		// Open led
LED_STAT led_close  (void);   	// Close led

//static int PT_THREAD(blinkLed01(struct pt *pt));
//static int PT_THREAD(blinkLed02(struct pt *pt));
//static int PT_THREAD(blinkLed03(struct pt *pt));

int blinkLed01(struct pt *pt);
int blinkLed02(struct pt *pt);
int blinkLed03(struct pt *pt);
int blinkLed07(struct pt *pt);


/**
 *@}
 */
#ifdef __cplusplus
}
#endif
#endif /* INC_APP_LED_H_ */
