#ifndef ITEM_H
#define ITEM_H
#include <string>
using std::string;
    class Item{
        protected:
            int fila,columna;
        public:
            Item();
            void setFila(int);
            Item(int,int);
            void setColumna(int);
            int getFilas();
            int getColumnas();
            virtual string toString();
    };
#endif