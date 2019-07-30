/*
 * File: SSRob_DDDDin.cpp
 * Project: SSRobArduinoLib
 * File Created: 2018-12-20
 * Author: ArthurZheng (869705086@qq.com)
 * -----
 * Last Modified: 2018-12-20
 * Modified By: ArthurZheng (869705086@qq.com>)
 * -----
 * Note: 四线数字输入模块驱动
 * -----
 * Copyright 2017 - 2018, YiQiChuang(ShanXi) Electronic Technology CO,LTD
 */


#include "SSRob_DDDDin.h"

uint8_t SSRob_DDDDin::read(uint8_t line)
{
    if(line == LINE_A)
        return digitalRead(port1.PortA);
    else if(line == LINE_B)
        return digitalRead(port1.PortB);
    else if(line == LINE_C)
        return digitalRead(port2.PortA);
    else if(line == LINE_D)
        return digitalRead(port2.PortB);
}