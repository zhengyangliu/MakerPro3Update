#ifndef __SSROB_RUNBUTTON_H
#define __SSROB_RUNBUTTON_H

#include "SsRob_Port.h"

class SsRob_RunButton : public SsRob_Port
{
public:
    SsRob_RunButton(void);

    void wait(void);
};

#endif