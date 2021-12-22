/*
 * main.h
 *
 *  Created on: 2021. 12. 22.
 *      Author: user
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "gio.h"
#include "het.h"

#define RUN_LED_ON              gioSetBit(hetPORT1, 10, 1)          // High: ON, Low: OFF
#define RUN_LED_OFF             gioSetBit(hetPORT1, 10, 0)
#define FAIL_LED_ON             gioSetBit(hetPORT1, 12, 1)
#define FAIL_LED_OFF            gioSetBit(hetPORT1, 12, 0)
#define REV1_LED_ON             gioSetBit(hetPORT1, 14, 1)
#define REV1_LED_OFF            gioSetBit(hetPORT1, 14, 0)


#endif /* MAIN_H_ */
