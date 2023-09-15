/*
*************************************************************************
* @file			simple_timer.h
* @author   	Airton Y. C. Toyofuku
* @copyright	
* @date			Aug 23, 2023
* @version		1.0.0
* @brief
*************************************************************************
*/
#ifndef INC_DRIVERS_SIMPLE_TIMER_H_
#define INC_DRIVERS_SIMPLE_TIMER_H_

#ifdef __cplusplus
#extern "C"{
#endif

typedef struct{
	int start;
	int interval;
}timer;

int clock_time    (void);
int timer_expired (timer *t);
void timer_set    (timer *t, int interval);

/**
 *@}
 */
#ifdef __cplusplus
}
#endif
#endif /* INC_DRIVERS_SIMPLE_TIMER_H_ */
