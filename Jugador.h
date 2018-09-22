#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "Item.h"
using std::string;
    class Jugador:public Item{
        private:
            string nombre;
            bool estado;
            int controlador;
        public:
            Jugador();
            Jugador(string,bool,int);
            bool getVivo();
            void setVivo(bool);
            string toString();
    };
#endif