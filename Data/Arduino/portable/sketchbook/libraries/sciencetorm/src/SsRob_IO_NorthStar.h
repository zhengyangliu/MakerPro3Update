/*
    科技风暴机器人 Block版编程主板 V0.1
 */

#ifndef __IO_GP_V1__H
#define __IO_GP_V1__H

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
    /* Green Button Reserve*/
    {NC, NC},
};

uint8_t SsRob_GreenButton = 2;
uint8_t SsRob_Ps2ReciverPin[4] = {0, 13, 1, A3};

#endif
