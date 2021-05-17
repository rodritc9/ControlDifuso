#include "FuncionPertenencia.h"

FuncionPertenencia::FuncionPertenencia() {
	
}

FuncionPertenencia::FuncionPertenencia(double xcNG,double x1NG,double x1NP,double xcNP,double x2NP,double x1Z,double xcZ,double x2Z, double x1PP,double xcPP,double x2PP,double x1PG,double xcPG){
	this->xcNG=xcNG;
	this->x1NG=x1NG;
	this->x1NP=x1NP;
	this->xcNP=xcNP;
	this->x2NP=x2NP;
	this->x1Z=x1Z;
	this->xcZ=xcZ;
	this->x2Z=x2Z;
	this->x1PP=x1PP;
	this->xcPP=xcPP;
	this->x2PP=x2PP;
	this->x1PG=x1PG;
	this->xcPG=xcPG;
}

FuncionPertenencia::~FuncionPertenencia() {
	
}

double FuncionPertenencia::selector(double x,int i){
	double resultado;
	switch (i){
		case 0: resultado=NG(x);
		break;
		case 1: resultado=NP(x);
		break;
		case 2: resultado=Z(x);
		break;
		case 3: resultado=PP(x);
		break;
		case 4: resultado=PG(x);
		break;
	}
	return resultado;
}

double FuncionPertenencia::NG(double x){
	double y;
	if(x<xcNG){
		y=1;
	}
	else if(x>=xcNG && x<=x1NG){
		y=(x-xcNG)*((0-1)/(x1NG-xcNG))+1;
	}
	else{
		y=0;
	}
	
	return y;
}

double FuncionPertenencia::NP(double x){
	double y;
	if(x>=x1NP && x<xcNP){
		y=(x-x1NP)*((1-0)/(xcNP-x1NP))+0;
	}
	else if(x>=xcNP && x<=x2NP){
		y=(x-xcNP)*((0-1)/(x2NP-xcNP))+1;
	}
	else{
		y=0;
	}
	
	return y;
}

double FuncionPertenencia::Z(double x){
	double y;
	if(x>=x1Z && x<xcZ){
		y=(x-x1Z)*((1-0)/(xcZ-x1Z))+0;
	}
	else if(x>=xcZ && x<=x2Z){
		y=(x-xcZ)*((0-1)/(x2Z-xcZ))+1;
	}
	else{
		y=0;
	}
	
	return y;
}

double FuncionPertenencia::PP(double x){
	double y;
		if(x>=x1PP && x<xcPP){//izquierda
			//if(x>=0||x<=0.375){
			
			y=(x-x1PP)*(1/(xcPP-x1PP));//+yo=0

		}
		else if(x>=xcPP && x<=x2PP){//derecha
			//if(x>=0.375||x<=0.75){
			y=(x-xcPP)*(-1/(x2PP-xcPP))+1;
		}
		else{
			y=0;
		}
		return y;
}

double FuncionPertenencia::PG(double x){
	
	double y;
	if(x>=x1PG && x<=xcPG){//derecha
		
		y=(x-x1PG)*(1/(xcPG-x1PG));
		
	}
	else if(x>xcPG){
		y=1;
		
	}
	else{
		y=0;
	}
	return y;
}
