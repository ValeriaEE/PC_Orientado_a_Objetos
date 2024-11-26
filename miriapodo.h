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
    Aracnido(string nombre, string nombreCientifico, string habitat, string dieta, float tam, int seccionMuseo, int numPatasSeccion, float largo {}
        : Bicho(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo), numPatasSeccion(numPatasSeccion), largo(largo) {}

    int getNumPatasSeccion() {
        return numPatasSeccion;
    }

    void setNumPatasSeccion(int patasSeccion) {
        numPatasSeccion = patasSeccion;
    }
	
	float getLargo() {
        return largo;
    }

    void setLargo(float largoMiriapodo) {
        largo = largoMiriapodo;
    }
	

    void mostrarInfo() {
        Bicho::mostrarInfo();
		cout << "Numero de patas por seccion: " << numPatasSeccion << endl; 
		cout << "Largo: " << largo << "cm" << endl;
        
    }
};

#endif
