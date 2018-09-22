#ifndef INVISIBLE_H
#define INVISIBLE_H
#include "Escenario.h"
class Invisible :public Escenario{
    protected:
        int vidas;
    public:
        Invisible(int);
};
#endif