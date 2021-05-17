/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   baseReglas.cpp
 * Author: fermonzon
 * 
 * Created on 15 de mayo de 2017, 15:27
 */

#include "baseReglas.h"

baseReglas::baseReglas() {

tita = new FuncionPertenencia(-0.23,-0.175,-0.25,-0.15,-0.05,-0.1,0,0.1,0.05,0.15,0.25,0.175,0.23);

omega= new FuncionPertenencia(-0.75,-0.5,-0.75,-0.375,0,-0.25,0,0.25,0,0.375,0.75,0.5,0.75);
vectorDefinitivo.push_back(1);

}

vector<double> baseReglas::reglas(vector<double> entrada){
	vectorDefinitivo.clear();
	double a=0;
	double b=0;

	for(int i=0;i<5;i++){
		b=omega->selector(entrada[1],i);
		for(int j=0;j<5;j++){
			a=tita->selector(entrada[0],j);
			if(b<a) a=b;
			vectorDefinitivo.push_back(a);
		}
	}
return vectorDefinitivo;
}


baseReglas::~baseReglas() {
}

