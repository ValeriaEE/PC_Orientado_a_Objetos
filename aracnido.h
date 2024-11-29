
#ifndef ARACNIDO_H_
#define ARACNIDO_H_

#include "bicho.h"
#include <iostream>
#include <string>

 using namespace std; 

class Aracnido : public Bicho {
private:
    int numOjos;
	string tipoVeneno;  

public:

	Aracnido() {
		numOjos = 0; 
		tipoVeneno = "";
	}

	Aracnido(string nombre, string nombreCientifico, string habitat, 
	string dieta, float tam, int seccionMuseo, int numOjos, string tipoVeneno);
    int getNumOjos();
	void setNumOjos(int);
	string getTipoVeneno();
	void setTipoVeneno(string);
	void mostrarInfo(); 
	
};

Aracnido::Aracnido(string nombre, string nombreCientifico, string habitat, 
string dieta, float tam, int seccionMuseo, int numOjos, string tipoVeneno)
    : Bicho(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo),
	numOjos(numOjos), 
	tipoVeneno(tipoVeneno) {}

int Aracnido::getNumOjos() {
    return numOjos;
}

void Aracnido::setNumOjos(int ojosAracnido) {
    numOjos = ojosAracnido;
}
	
string Aracnido::getTipoVeneno() {
    return tipoVeneno;
}

void Aracnido::setTipoVeneno(string veneno) {
	tipoVeneno = veneno;
}
	

void Aracnido::mostrarInfo() {
	Bicho::mostrarInfo();
	cout << "Numero de ojos: " << numOjos << endl; 
	cout << "Tipo de veneno: " << tipoVeneno << endl;
}


#endif
