
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
    Aracnido(string nombre, string nombreCientifico, string habitat, string dieta, float tam, int seccionMuseo, int numOjos, string tipoVeneno {}
        : Bicho(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo), numOjos(numOjos), tipoVeneno(tipoVeneno) {}

    int getNumOjos() {
        return numOjos;
    }

    void setNumOjos(int ojosAracnido) {
        numOjos = ojosAracnido;
    }
	
	string getTipoVeneno() {
        return tipoVeneno;
    }

    void setTipoVeneno(string veneno) {
        tipoVeneno = veneno;
    }
	

    void mostrarInfo() {
        Bicho::mostrarInfo();
		cout << "Numero de ojos: " << numOjos << endl; 
		cout << "Tipo de veneno: " << tipoVeneno << endl;
        
    }
};

#endif
