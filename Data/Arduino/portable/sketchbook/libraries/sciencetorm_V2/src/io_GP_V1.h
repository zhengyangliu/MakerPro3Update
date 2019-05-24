#ifndef __IO_GP_V1__H
#define __IO_GP_V1__H

#include "SsRob_Port.h"
#include "SsRob_RGBLED.h"
#include "SsRob_Buzzer.h"
#include "SsRob_OLED.h"
#include "SsRob_DHT11.h"
#include "SsRob_Ultrasonic.h"
#include "SsRob_PS2.h"
#include "SsRob_DcMotor.h"

#define IDLE        0
#define TRIGGERED   1

SsRob_Port_Sig ssrobPort[19] =
{
    {NC, NC},
    {10, 11},
    { 9,  3},
    {13, 12},
    { 2,  8},
    { 0,  1},
    {A3, A2},
    {A1, A6},
    {A0, A7},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    { 6,  7},
    { 5,  4},
};

uint8_t SsRob_GreenButton = 2;
uint8_t SsRob_Ps2ReciverPin[4] = {0, 13, 1, A3};

#endif
