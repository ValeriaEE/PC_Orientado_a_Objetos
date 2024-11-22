
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
    Insecto(string nombre, string nombreCientifico, string habitat, string dieta, float tam, int seccionMuseo, int numPatas, string tipoMetamorfosis )
        : Bicho(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo), numPatas(numPatas), tipoMetamorfosis(tipoMetamorfosis) {}

    int getNumPatas() {
        return numPatas;
    }

    void setNumPatas(int patasInsecto) {
        numPatas = patasInsecto;
    }
	
	string getTipoMetamorfosis() {
        return tipoMetamorfosis;
    }

    void setTipoMetamorfosis(string insectoMeta) {
        tipoMetamorfosis = insectoMeta;
    }
	

    void mostrarInfo() {
        Bicho::mostrarInfo();
		cout << "Numero de patas" << numPatas << endl; 
		cout << "Tipo de Metamorfosis" << tipoMetamorfosis << endl;
        
    }
};

#endif
