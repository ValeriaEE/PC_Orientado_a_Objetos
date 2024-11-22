#ifndef MUSEO_H_
#define MUSEO_H_

#include <iostream>
#include <string>

using namespace std;

class Museo {
private:
    string nombre;
    string ubicacion;
	int numSede;
	int boletosDisp;
	

public:

	// Constructores 
	Museo() : nombre(""), ubicacion(""), numSede(0), boletosDisp(0) {}

    
    Museo(string nombre, string ubicacion, int numSede, int boletosDisp, bool subscripcion, bool boleto) 
        : nombre(nombre), ubicacion(ubicacion), numSede(numSede), boletosDisp(boletosDisp) {}
	

    // Getters y setters 
	//nombre 
	string getNombre ();        
    void setNombre(string);
	
	//ubicacion 
	string getUbicacion();
	void setUbicacion(string);
	
	//numero de sede 
	int getNumSede();
	void setNumSede(int);
	
	//boletos disponibles 
	int getBoletosDisp();
	void setBoletosDisp(int);
	
	
	
	
    // Métodos 
   
	
	void mostrarInfoMuseo (){
		cout << "Informacion del museo:" << endl;
		cout << "Nombre: " << nombre << endl;
		cout << "Ubicacion: " << ubicacion << endl;
		cout << "Numero de sede: " << numSede << endl;
	}
	
	void mostrarMapa() const {
		cout << "Mapa" << endl;
	} 
	
	void mostrarExhibiciones () const {
		cout << "Exhibiciones disponibles en el museo" << endl;
	}
	
	
	void venderBoletos(int cantidad) {
        if (cantidad <= boletosDisp) {
            boletosDisp -= cantidad;
            cout << "Se han vendido " << cantidad << " boletos. Quedan " << boletosDisp << " boletos disponibles." << endl;
        }if (cantidad >= boletosDisp) {
			cout << "Lo siento, no hay suficientes boletos disponibles. Solo quedan " << boletosDisp << " boletos." << endl;	
		}else {
            cout << "Lo siento, no hay boletos" << endl; 
        }
    }
	
	int subscripciones = 0; 
	void venderSubscripcion() {
        subscripciones++;
        cout << "Se ha vendido una nueva suscripción"<< endl;
		cout << "Numero de subscribciones:" << subscripciones <<endl; 
    }
};


// Definición de los métodos fuera de la clase 
//nombre 
string Museo::getNombre() {
    return nombre;
}

void Museo::setNombre(string nombreBicho) {
    nombre = nombreBicho;
}

//ubicacion 
string Museo::getUbicacion() {
    return ubicacion;
}

void Museo::setUbicacion(string ubiMuseo) {
    ubicacion = ubiMuseo;
}

//numero de sede 
int Museo::getNumSede() {
    return numSede;
}

void Museo::setNumSede(int sedeMuseo) {
    numSede = sedeMuseo;
}

//boletos disponibles 
int Museo::getBoletosDisp() {
    return boletosDisp;
}

void Museo::setBoletosDisp(int boletosMuseo) {
    boletosDisp = boletosMuseo;
}

	
#endif

	