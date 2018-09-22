#include "Bombav.h"
#include "Bnormal.h"
#include "Bespina.h"
#include "Jugador.h"
#include "Obstaculo.h"
#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
void imprimir();
Item ***matriz;
int main(){
    vector<Bomba*> bombas;
    matriz = new Item**[11];
    for(int i = 0;i<11;i++){
        matriz[i] = new Item*[13];
    }
    for(int i = 0;i<10;i++){
        for(int j = 0;j<12;j++){
            matriz[i][j] = NULL;
        }
    }  
    Jugador* jugador = new  Jugador("Jugador",true,1);
    Jugador* enemigo1 =  new Jugador("Jugador",true,0);
    Jugador* enemigo2 =  new Jugador("Jugador",true,0);
    Jugador* enemigo3 =  new Jugador("Jugador",true,0);
    Obstaculo* s = new Obstaculo();
    matriz[0][0]= jugador;
    matriz[0][12] = enemigo1;
    matriz[10][0] = enemigo2;
    matriz[10][12] = enemigo3;
    for(int i = 0;i<11;i++){
        for(int j = 0;j<13;j++){
            if(j%2 != 0 && i%2 !=0){
                   matriz[i][j] = s;}
            
        }
    }
    imprimir();
    int x=0;
    int y=0;
    while((jugador->getVivo()==true)||(enemigo1->getVivo()==false&&enemigo2->getVivo()==false&&enemigo1->getVivo()==false)){
        for(int i = 0;i<bombas.size();i++){
            bombas[i]->setTurno();
            if(bombas[i]->getTurno()==0){
                cout<<"Exploto"<<endl;
                matriz[bombas[i]->getFilas()][bombas[i]->getColumnas()] == NULL;
            }
        }
        string movimiento;
        char poneromba='n';
        cout<<"Quier dejar una bomba s/n"<<endl;
        cin>>poneromba;
        cin.clear();
        int xb = 0;
        int yb = 0;
        if(poneromba=='s'){
            xb = x;
            yb = y;
            Bnormal* b = new Bnormal();
            b->setFila(xb);
            b->setColumna(yb);  
            bombas.push_back(b);         
        };
        cout<<"Ingrese a donde se quiere mover (wasd) para poner bomba"<<endl;
        cin>>movimiento;
        int c = 0;
        while(c<movimiento.size()){
            char mov = movimiento[c];     
            switch(mov){
                case 'a':{
                    if(y-1>=0){
                        if(matriz[x][y-1]==NULL){
                        matriz[x][y-1] = jugador;
                        matriz[x][y] = NULL;
                        y--;}
                    }
                    break;
                }
                case 'd':{
                    if(y+1<13){
                        if(matriz[x][y+1]==NULL){
                        matriz[x][y+1] = jugador;
                        matriz[x][y] = NULL;
                        y++;}
                    }
                    break;
                }
                case 'w':{
                    if(x-1>=0){
                        if(matriz[x-1][y]==NULL){
                        matriz[x-1][y] = jugador;
                        matriz[x][y] = NULL;
                        x--;}
                    }
                    break;
                }
                case 's':{
                    if(x+1<11){
                        if(matriz[x+1][y]==NULL){
                        matriz[x+1][y] = jugador;
                        matriz[x][y] = NULL;
                        x++;}
                    }
                    break;
                }
            }
            if(poneromba=='s'){
            matriz[xb][yb] = bombas[0];
            }
            c++;
        }
        imprimir();

        
    }
    
    for(int i = 0;i<10;i++){
        for(int j = 0;j<12;j++){
            delete matriz[i][j];
        }
        delete[] matriz[i];
    }
    delete matriz;
    return 0;
}

void imprimir(){
    for(int i = 0;i<11;i++){
        for(int j = 0;j<13;j++){
            if(matriz[i][j]==NULL){
            cout<<"   ";
            }else{
            cout<<" "<<matriz[i][j]->toString()<<" ";
            }
        }
        cout<<endl;
    }
}