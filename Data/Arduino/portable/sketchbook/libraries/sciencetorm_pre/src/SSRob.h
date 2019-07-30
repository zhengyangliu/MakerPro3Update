#ifndef __SSROB_H
#define __SSROB_H

#include <Arduino.h>

// 通用接口定义
#define PORT1      0
#define PORT2      1
#define PORT3      2
#define PORT4      3
#define PORT5      4
#define PORT6      5
#define PORT7      6
#define PORT8      7
#define PORT9      8
#define PORT10     9

// 线序
#define LINE_A     0
#define LINE_B     1

class SSRob_Port 
{
public:
    SSRob_Port()
    {
        PortA = 3;
        PortB = 2;
    }
    void SetPort(uint8_t _p);

    uint8_t PortA;
    uint8_t PortB;
};

#endif