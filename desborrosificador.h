/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   desborrosificador.h
 * Author: fermonzon
 *
 * Created on 15 de mayo de 2017, 16:13
 */

#ifndef DESBORROSIFICADOR_H
#define	DESBORROSIFICADOR_H

#include <vector>

using namespace std;
class desborrosificador {
public:
	desborrosificador();
	virtual ~desborrosificador();
        double desborrosificacion(vector<double>);
private:
        vector<double> fuerza;
};

#endif	/* DESBORROSIFICADOR_H */

