#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"
#include <string>
using std::string;
    class Bomba:public Item{
        protected:
            int turno;
        public:
            Bomba(int);
            void setTurno();
            int getTurno();
            Bomba();
            string toString();
    };
#endif