#include "Item.h"

Item::Item(){
    fila = 0;
    columna = 0;
}
Item::Item(int pfila,int pcolumna){
        fila = pfila;
        columna = pcolumna;        
}
void Item::setColumna(int pcolumna){
    columna = pcolumna;
}
void Item::setFila(int pFila){
    fila = pFila;
}
int Item::getFilas(){
    return fila;
}
int Item::getColumnas(){
    return columna;
}
string Item::toString(){
    return "*";
}