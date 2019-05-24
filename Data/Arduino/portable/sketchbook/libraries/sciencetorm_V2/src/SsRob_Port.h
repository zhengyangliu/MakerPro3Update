
#ifndef __SSROB_PORT_H
#define __SSROB_PORT_H

#include <Arduino.h>

/**
 * A structure to represent SsRob port Signal.
 */
typedef struct
{
    uint8_t s1;
    uint8_t s2;
} SsRob_Port_Sig;

extern SsRob_Port_Sig ssrobPort[19];

#define NC        (0)
#define P1        (1)
#define P2        (2)
#define P3        (3)
#define P4        (4)
#define P5        (5)
#define P6        (6)
#define P7        (7)
#define P8        (8)
#define P9        (9)
#define P10       (10)
#define P11       (11)
#define P12       (12)
#define P13       (13)
#define P14       (14)
#define P15       (15)
#define P16       (16)
#define M1        (17)
#define M2        (18)

#define SLOT1     (1)
#define SLOT2     (2)

class SsRob_Port
{
public:
    SsRob_Port(void);
    SsRob_Port(uint8_t port);
    SsRob_Port(uint8_t port, uint8_t slot);

    uint8_t getPort(void);                    /*!< Get current valid port of current RJ25 object */
    uint8_t getSlot(void);                    /*!< Get current valid slot of current RJ25 object's port */
    bool dRead1(uint8_t mode = INPUT);        /*!< Read the digital input value on slot1 of current RJ25 object's port */
    bool dRead2(uint8_t mode = INPUT);        /*!< Read the digital input value on slot2 of current RJ25 object's port */
    bool dpRead1(void);                       /*!< Read the digital input value on slot1 of current RJ25 object's port, the input mode set as INPUT_PULLUP*/
    bool dpRead2(void);                       /*!< Read the digital input value on slot2 of current RJ25 object's port, the input mode set as INPUT_PULLUP*/
    void dWrite1(bool value);                 /*!< Set the digital output value on slot1 of current RJ25 object's port */    
    void dWrite2(bool value);                 /*!< Set the digital output value on slot2 of current RJ25 object's port */
    int16_t aRead1(void);                     /*!< Read the analog value on slot1 of current RJ25 object's port */
    int16_t aRead2(void);                     /*!< Read the analog value on slot2 of current RJ25 object's port */
    void aWrite1(int16_t value);              /*!< Set the PWM output value on slot1 of current RJ25 object's port */
    void aWrite2(int16_t value);              /*!< Set the PWM output value on slot2 of current RJ25 object's port */
    void reset(uint8_t port);                 /*!< Reset the RJ25 available PIN by its port */
    void reset(uint8_t port, uint8_t slot);   /*!< Reset the RJ25 available PIN by its port and slot */
    uint8_t pin1(void);                       /*!< Return the arduino pin number of current RJ25 object's slot1 */
    uint8_t pin2(void);                       /*!< Return the arduino pin number of current RJ25 object's slot2 */
    uint8_t pin(void);                        /*!< Return the arduino pin number of current RJ25 object's port, if the RJ25 module have one available PIN. */
    uint8_t pin(uint8_t port, uint8_t slot);  /*!< Return the arduino pin number of current RJ25 object's port */

protected:
    uint8_t s1;                               /*!< Variables used to store the slot1 gpio number */
    uint8_t s2;                               /*!< Variables used to store the slot2 gpio number */
    uint8_t _port;                            /*!< Variables used to store the port */
    uint8_t _slot;                            /*!< Variables used to store the slot */
};

#endif