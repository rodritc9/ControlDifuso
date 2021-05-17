#ifndef FUNCIONPERTENENCIA_H
#define FUNCIONPERTENENCIA_H

#include <vector>
using namespace std;

class FuncionPertenencia {
	
private:
	double xcNG;
	double x1NG;
	double x1NP;
	double xcNP;
	double x2NP;
	double x1Z;
	double xcZ;
	double x2Z;
	double x1PP;
	double xcPP;
	double x2PP;
	double x1PG;
	double xcPG;
	
public:
	FuncionPertenencia();
	FuncionPertenencia(double,double,double,double,double,double,double,double,double,double,double,double,double);
	~FuncionPertenencia();
	double selector(double,int);
	double NG(double);
	double NP(double);
	double Z(double);
	double PP(double);
	double PG(double);
};

#endif

