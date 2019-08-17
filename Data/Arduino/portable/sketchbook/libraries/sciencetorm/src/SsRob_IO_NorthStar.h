/*
    科技风暴机器人NorthStar编程主板
 */

#ifndef __SsRob_IO_NorthStar_H
#define __SsRob_IO_NorthStar_H

#include "SsRob_Port.h"
#include "SsRob_RGBLED.h"
#include "SsRob_Buzzer.h"
#include "SsRob_OLED.h"
#include "SsRob_DHT11.h"
#include "SsRob_Ultrasonic.h"
#include "SsRob_PS2.h"
#include "SsRob_DcMotor_MAX612E.h"
#include "SsRob_RunButton.h"
#include "SsRob_Servo.h"

SsRob_Port_Sig ssrobPort[30] =
{
    /* Reserve */
    {NC, NC},
    /* P1~P4 */
    {10, 11},
    { 9,  3},
    {13, 12},
    { 2,  8},
    /* P5~P8 */
    { 0,  1},
    {A3, A2},
    {A1, A6},
    {A0, A7},
    /* P9~P16 Reserve */
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    /* M1~M2 */
    { 6,  7},
    { 5,  4},
    /* M3~M6 Reserve */
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    /* S1~S6 Reserve */
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    /* Run Button Reserve*/
    {NC, NC},
};

uint8_t SsRob_Ps2ReciverPin[4] = {0, 13, 1, A3};

#endif
