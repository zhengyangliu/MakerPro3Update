/*
    科技风暴机器人Block编程主板
 */

#ifndef __SSROB_IO_BLOCK_H
#define __SSROB_IO_BLOCK_H

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
#include "SsRob_TwoChLineFollower.h"

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
    /* Run Button */
    {A6, NC}
};

uint8_t SsRob_Ps2ReciverPin[4] = {1, A1, 0, A0};

#endif
