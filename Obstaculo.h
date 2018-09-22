#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <iostream>
#include <string>
#include "Item.h"
using std::string;
class Obstaculo:public Item{
    public:
        Obstaculo();
        string toString();
};
#endif