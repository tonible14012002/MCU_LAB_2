/*
 * software_timer.h
 *
 *  Created on: Oct 9, 2023
 *      Author: WELCOME
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int timer0_flag;
int timer1_flag;
int timer2_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
