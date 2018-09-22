#ifndef ESCENARIO_H
#define ESCENARIO_H
#include "Item.h"
    class Escenario{
      protected:
        string nombre;   
        Item matriz[11][13];
      public:
        Escenario(string);
        Escenario();

    };
#endif