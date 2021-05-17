/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   desborrosificador.cpp
 * Author: fermonzon
 * 
 * Created on 15 de mayo de 2017, 16:13
 */

#include "desborrosificador.h"
#define NG -10
#define NP -5
#define Z 0
#define PP 5
#define PG 10

desborrosificador::desborrosificador() {

fuerza.push_back(PG);
fuerza.push_back(PG);
fuerza.push_back(PP);
fuerza.push_back(PP);
fuerza.push_back(Z);
fuerza.push_back(PG);
fuerza.push_back(PP);
fuerza.push_back(PP);
fuerza.push_back(Z);
fuerza.push_back(NP);
fuerza.push_back(PP);
fuerza.push_back(PP);
fuerza.push_back(Z);
fuerza.push_back(NP);
fuerza.push_back(NP);
fuerza.push_back(PP);
fuerza.push_back(Z);
fuerza.push_back(NP);
fuerza.push_back(NP);
fuerza.push_back(NG);
fuerza.push_back(Z);
fuerza.push_back(NP);
fuerza.push_back(NP);
fuerza.push_back(NG);
fuerza.push_back(NG);

}

double desborrosificador::desborrosificacion(vector<double>borrosificado){
    double aux=0;
    double aux2=0;
    for(int i=0;i<borrosificado.size();i++){
        aux=aux+fuerza[i]*borrosificado[i];
        aux2=aux2+borrosificado[i];
    }
    double salida=aux/aux2;

return salida;
    
}

desborrosificador::~desborrosificador() {
}

