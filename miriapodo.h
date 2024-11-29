#ifndef MIRIAPODO_H_
#define MIRIAPODO_H_

#include "bicho.h"
#include <iostream>
#include <string>

 using namespace std; 

class Miriapodo : public Bicho {
private:
    int numPatasSeccion;
	float largo;  

public:

	Miriapodo() {
		numPatasSeccion = 0; 
		largo = 0.0;
	}
    Miriapodo(string nombre, string nombreCientifico, string habitat,
	string dieta, float tam, int seccionMuseo, int numPatasSeccion, float largo);
	int getNumPatasSeccion();
	void setNumPatasSeccion(int);
	float getLargo();
	void setLargo(float);
	void mostrarInfo(); 
};

Miriapodo::Miriapodo(string nombre, string nombreCientifico, string habitat, 
string dieta, float tam, int seccionMuseo, int numPatasSeccion, float largo)
	: Bicho(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo),
	numPatasSeccion(numPatasSeccion),
	largo(largo) {}

int Miriapodo::getNumPatasSeccion() {
	return numPatasSeccion;
}

void Miriapodo::setNumPatasSeccion(int patasSeccion) {
	numPatasSeccion = patasSeccion;
}
	
float Miriapodo::getLargo() {
	return largo;
}

void Miriapodo::setLargo(float largoMiriapodo) {
	largo = largoMiriapodo;
}
	
void Miriapodo::mostrarInfo() {
	Bicho::mostrarInfo();
	cout << "Numero de patas por seccion: " << numPatasSeccion << endl; 
	cout << "Largo por seccion: " << largo << "cm" << endl;
}

#endif
