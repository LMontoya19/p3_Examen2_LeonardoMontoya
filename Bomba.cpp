#include "Bomba.h"
#include <string>
using std::string;
Bomba::Bomba(int pturno){
    turno = pturno;
}
Bomba::Bomba(){
    turno = 0;
}
void Bomba::setTurno(){
        turno--;
}
string Bomba::toString(){
    return "B";
}
int Bomba::getTurno(){
    return turno;
}