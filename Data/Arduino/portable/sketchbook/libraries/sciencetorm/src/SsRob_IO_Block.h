/*
    科技风暴机器人 Block版编程主板 V1.0
 */

#ifndef __IO_LPB_V1__H
#define __IO_LPB_V1__H

#include "SsRob_Port.h"
#include "SsRob_RGBLED.h"
#include "SsRob_Buzzer.h"
#include "SsRob_OLED.h"
#include "SsRob_DHT11.h"
#include "SsRob_Ultrasonic.h"
#include "SsRob_PS2.h"
#include "SsRob_DcMotor.h"
#include "SsRob_RunButton.h"
#include "SsRob_Servo.h"

SsRob_Port_Sig ssrobPort[30] =
{
    /* Reserve */
    {NC, NC},
    /* P1~P4 */
    { 2,  4},
    {10, 11},
    {12, NC},
    {13, NC},
    /* P5~P8 */
    {A3, NC},
    {A2, NC},
    {A1, NC},
    {A0, NC},
    /* P9~P16 Reserve */
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    /* M1~M4 */
    { 3,  7},
    { 5,  8},
    { 6,  2},
    { 9,  4},
    /* M5~M6 Reserve */
    {NC, NC},
    {NC, NC},
    /* S1~S2 */
    { 6, NC},
    { 9, NC},
    /* S3~S6 Reserve */
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    /* Green Button */
    {A6, NC}
};

uint8_t SsRob_Ps2ReciverPin[4] = {0, 13, 1, A3};

#endif
