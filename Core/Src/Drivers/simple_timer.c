/*
*************************************************************************
* @file			simple_timer.c
* @author   	Airton Y. C. Toyofuku
* @copyright	
* @date			Aug 23, 2023
* @version		1.0.0
* @brief
*************************************************************************
*/

/* Includes ************************************************************/
#include "board.h"
#include "simple_timer.h"

/* Definitions *********************************************************/

/* Typedefs ************************************************************/

/* Variables ***********************************************************/

/* Function Protoypes **************************************************/


/* Public Functions ****************************************************/

/* Funções para implementar o temporizador no sistema. */
int tick_counter = 0;

int clock_time(void){
	return (int)HAL_GetTick();
}

int timer_expired(timer *t){
	return (int)(clock_time() - t->start) >= (int)t->interval;
}

void timer_set(timer *t, int interval){
	t->interval = interval; t->start = clock_time();
}

/* Private Functions ***************************************************/

/*
 * @brief
 * @param
 * @return
 */
