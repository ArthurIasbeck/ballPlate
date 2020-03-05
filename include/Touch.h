#ifndef Touch_h
#define Touch_h

#include "Arduino.h"

//! Realiza leitura da touchscreen.
class Touch
{
    public:
        Touch(int touchPin1, int touchPin2, int touchPin3, int touchPin4);
        //! Retorna o valor bruto (0-1023) lido no eixo X.
        int getRawX();
        //! Retorna o valor bruto (0-1023) lido no eixo Y.
        int getRawY();
        float getCmX();
        float getCmY();
        static const int NO_BALL = -999;
    private:
        int touchPin1, touchPin2, touchPin3, touchPin4;
};

#endif