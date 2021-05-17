
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iostream>
#include "baseReglas.h"
#include "desborrosificador.h"

#define g 9.8
#define m 1
#define M 3
#define l 1
#define DELTA_T 0.001
#include <fstream>

using namespace std;

double funcion_aceleracion(double fuerza,vector <double> entrada){

	double numerador = g * sin(entrada[0]) + cos(entrada[0]) * ((-fuerza - m * l * pow(entrada[1], 2) * sin(entrada[0])) / (m + M));
	double denominador = l * (4 / 3 - (m * pow(cos(entrada[0]), 2)) / (m + M));

	return(-numerador/denominador);
}
int main() {
ofstream fout;
ofstream fout1;
vector<double>entrada;
vector<double>borrosificacion;

baseReglas *reglamento;
reglamento= new baseReglas();

desborrosificador *desborrosificadr;
desborrosificadr = new desborrosificador();
int decision=1;
entrada.push_back(1);
double alfa;
double fuerza;
double tita;
double omega;
    while(decision==1){
		fout.open("posicion.txt");
		fout1.open("velocidad.txt");
    entrada.clear();
    cout<<"Ingrese tita"<<endl;
    cin>>tita;
    entrada.push_back(tita);
    cout<<"Ingrese omega"<<endl;
    cin>>omega;
    entrada.push_back(omega);
	for(double u=0;u<5.0;u+=DELTA_T){
    borrosificacion=reglamento->reglas(entrada);
    fuerza=desborrosificadr->desborrosificacion(borrosificacion);

	//********************************//
	alfa=funcion_aceleracion(fuerza,entrada);
	entrada[0] = entrada[0] + entrada[1] * DELTA_T + 0.5 * alfa * pow(DELTA_T, 2);
	entrada[1]=entrada[1]+alfa*DELTA_T;

	fout<<entrada[0]<<endl;
	fout1<<entrada[1]<<endl;
	//********************************//

	}
	fout.close();
	fout1.close();

    cout<<"Desea ingresar otra entrada"<<endl<<endl<<"1-Si"<<endl<<"Otro-No"<<endl;
    cin>>decision;
	borrosificacion.clear();
}
return 0;
}
