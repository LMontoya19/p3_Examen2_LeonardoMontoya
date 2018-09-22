#ifndef BESPINA_H
#define BESPINA_H
#include  "Bomba.h"
    class Bespina:public Bomba{
        protected:
            int cantidad;
        public:
            Bespina(int);
    };
#endif