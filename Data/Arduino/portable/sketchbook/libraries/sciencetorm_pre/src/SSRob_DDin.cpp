/*
 * File: SSRob_DDin.cpp
 * Project: SSRobArduinoLib
 * File Created: 2018-11-30
 * Author: ArthurZheng (869705086@qq.com)
 * -----
 * Last Modified: 2018-11-30
 * Modified By: ArthurZheng (869705086@qq.com>)
 * -----
 * Note: 双线数字输入模块驱动
 * -----
 * Copyright 2017 - 2018, YiQiChuang(ShanXi) Electronic Technology CO,LTD
 */


#include "SSRob_DDin.h"

uint8_t SSRob_DDin::read(uint8_t line)
{
    if(line == LINE_A)
        return digitalRead(port.PortA);
    else if(line == LINE_B)
        return digitalRead(port.PortB);
}