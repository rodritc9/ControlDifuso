/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   baseReglas.h
 * Author: fermonzon
 *
 * Created on 15 de mayo de 2017, 15:27
 */

#ifndef BASEREGLAS_H
#define	BASEREGLAS_H

#include <vector>
#include <iostream>
#include "FuncionPertenencia.h"

using namespace std;

class baseReglas {
public:
	baseReglas();
	virtual ~baseReglas();
        vector<double> reglas(vector<double>);
private:
        vector<double>vectorDefinitivo;
FuncionPertenencia *tita;
FuncionPertenencia *omega;
};

#endif	/* BASEREGLAS_H */

