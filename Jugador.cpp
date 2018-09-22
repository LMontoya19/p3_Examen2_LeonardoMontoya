#include "Jugador.h"

Jugador::Jugador(string pnombre,bool pestado,int pcontrolador){
    nombre = pnombre;
    pestado = estado;
    controlador = pcontrolador;
}

Jugador::Jugador(){
    nombre = "";
    estado = true;
    controlador = 0;
}
void Jugador::setVivo(bool v){
    estado = v;
}
bool Jugador::getVivo(){
    return estado;
}
string Jugador::toString(){
    if(controlador == 1){
        return "J";
    }else{
        return "E";
    }
}