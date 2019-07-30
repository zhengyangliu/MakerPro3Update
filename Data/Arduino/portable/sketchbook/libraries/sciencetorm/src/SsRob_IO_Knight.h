/*
    科技风暴机器人 Warden编程主板 V1.0
 */

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
    { 7,  8},
    {A1, NC},
    {A0, NC},
    /* P5 LED */
    {A2, NC},
    /* P6 Beep */
    {11, NC},
    /* P7 TouchSwitch */
    {A3, NC},
    /* P8 Mic */
    {10, NC},
    /* P9 RGBLED */
    {A2, NC},
    /* P10~P16 Reserve */
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    {NC, NC},
    /* M1~M4 */
    { 3, 12},
    { 5, 13},
    /* M3~M6 Reserve */
    {NC, NC},
    {NC, NC},
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

