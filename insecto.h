
#ifndef INSECTO_H_
#define INSECTO_H_

#include "bicho.h"
#include <iostream>
#include <string>

 using namespace std; 

class Insecto : public Bicho {
private:
    int numPatas;
	string tipoMetamorfosis;  

public:

	Insecto() {
		numPatas = 0; 
		tipoMetamorfosis = "";
	}
    Insecto(string nombre, string nombreCientifico, string habitat, 
	string dieta, float tam, int seccionMuseo, int numPatas, 
	string tipoMetamorfosis);
	int getNumPatas(); 
	void setNumPatas(int);
	string getTipoMetamorfosis();
	void setTipoMetamorfosis(string); 
	// mostrar informacion 
	void mostrarInfo(); 
};

//Constructor 
Insecto::Insecto(string nombre, string nombreCientifico, 
string habitat, string dieta, float tam, int seccionMuseo,
 int numPatas, string tipoMetamorfosis)
    : Bicho(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo),
	numPatas(numPatas), tipoMetamorfosis(tipoMetamorfosis) {}

//getters y setters 
int Insecto::getNumPatas() {
        return numPatas;
} 

void Insecto::setNumPatas(int patasInsecto) {
    numPatas = patasInsecto;
}
	
string Insecto::getTipoMetamorfosis() {
    return tipoMetamorfosis;
}

void Insecto::setTipoMetamorfosis(string insectoMeta) {
    tipoMetamorfosis = insectoMeta;
}

void Insecto::mostrarInfo() {
    Bicho::mostrarInfo();
	cout << "Numero de patas" << numPatas << endl; 
	cout << "Tipo de Metamorfosis" << tipoMetamorfosis << endl;
}	
	
#endif
