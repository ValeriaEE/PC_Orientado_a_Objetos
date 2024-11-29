#ifndef MUSEO_H_
#define MUSEO_H_

#include <iostream>
#include <string>
#include "bicho.h"
#include "insecto.h"
#include "miriapodo.h"
#include "aracnido.h"

using namespace std;

class Museo {
private:
    string nombre;
    string ubicacion;
    int numSede;
    int boletosDisp;

    Insecto insectos[30];   // Arreglo para almacenar insectos
    Aracnido aracnidos[30]; // Arreglo para almacenar arácnidos
    Miriapodo miriapodos[30]; // Arreglo para almacenar miriápodos
    int numInsectos;
    int numAracnidos;
    int numMiriapodos;
	
	int subscripciones = 0;

public:
    // Constructores
	
    
	Museo(string nombre, string ubicacion, int numSede, int boletosDisp, 
	int numInsectos, int numAracnidos, int numMiriapodos);
	 
    void agregarInsecto( Insecto& insecto);   
    void agregarAracnido( Aracnido& aracnido);
	void agregarMiriapodo(Miriapodo& miriapodo);
	
	//Getters y setters 
    
	string getNombre();
    void setNombre(string);

    string getUbicacion();
    void setUbicacion(string);

    int getNumSede();
    void setNumSede(int);

    int getBoletosDisp();
    void setBoletosDisp(int);
	
	//metodos 

    void mostrarInfoMuseo();
	void mostrarMapa();
	void mostrarExhibiciones();
	void venderBoletos(int cantidad);
	void venderSubscripcion(); 

};

Museo::Museo(string nombre, string ubicacion, int numSede, 
int boletosDisp, int numInsectos, int numAracnidos, int numMiriapodos)
	: nombre(nombre), ubicacion(ubicacion), 
	numSede(numSede), boletosDisp(boletosDisp), numInsectos(numInsectos),
	numAracnidos(numAracnidos), numMiriapodos(numMiriapodos){}
	
// Métodos para agregar bichos
void Museo::agregarInsecto( Insecto& insecto) {
	if (numInsectos < 30) {
		insectos[numInsectos] = insecto;
		numInsectos++;
		cout << insecto.getNombre() << " ha sido agregado a la coleccion de insectos del museo." << endl;
	} else {
		cout << "No se pueden agregar mas insectos. La coleccion esta llena." << endl;
	}
}
void Museo::agregarAracnido( Aracnido& aracnido) {
	if (numAracnidos < 30) {
		aracnidos[numAracnidos] = aracnido;
		numAracnidos++;
		cout << aracnido.getNombre() << " ha sido agregado a la coleccion de aracnidos del museo." << endl;
	} else {
		cout << "No se pueden agregar mas aracnidos. La coleccion esta llena." << endl;
	}
}

void Museo::agregarMiriapodo( Miriapodo& miriapodo) {
	if (numMiriapodos < 30) {
		miriapodos[numMiriapodos] = miriapodo;
		numMiriapodos++;
		cout << miriapodo.getNombre() << " ha sido agregado a la colección de miriapodos del museo." << endl;
	} else {
		cout << "No se pueden agregar mas miriapodos. La colección estae llena." << endl;
	}
}	
//getters y setters 
string Museo::getNombre() {
    return nombre;
}

void Museo::setNombre(string nombreMuseo) {
    nombre = nombreMuseo;
}

string Museo::getUbicacion() {
    return ubicacion;
}

void Museo::setUbicacion(string ubicacionMuseo) {
    ubicacion = ubicacionMuseo;
}

int Museo::getNumSede() {
    return numSede;
}

void Museo::setNumSede(int sedeMuseo) {
    numSede = sedeMuseo;
}	

int Museo::getBoletosDisp() {
    return boletosDisp;
}

void Museo::setBoletosDisp(int boletosMuseo) {
    boletosDisp = boletosMuseo;
}	

// Métodos para el museo
void Museo::mostrarInfoMuseo() {
	cout << "Informacion del museo:" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Ubicacion: " << ubicacion << endl;
	cout << "Número de sede: " << numSede << endl;
}

void Museo::mostrarMapa() {
	cout << "Mapa del museo." << endl; 
}

void Museo::mostrarExhibiciones() {
	cout << "Exhibiciones disponibles en el museo." << endl;
	cout << "1. Insectos Nocturnos" << endl;
	cout << "2. Insectos Gigantes" << endl;
	cout << "3. Aracnidos Terrestres" << endl;
	cout << "4. Aracnidos que pican" << endl;
	cout << "5. Miriapodos Gigantes" << endl;
}

void Museo::venderBoletos(int cantidad) {
	if (cantidad <= boletosDisp) {
		boletosDisp -= cantidad;
		cout << "Se han vendido " << cantidad << " boletos. Quedan " << boletosDisp << " boletos disponibles." << endl;
	} else {
		cout << "Lo siento, no hay suficientes boletos disponibles. Solo quedan " << boletosDisp << " boletos." << endl;
	}
}

void Museo::venderSubscripcion() {
	subscripciones++;
	cout << "Se ha vendido una nueva suscripcion. Total de suscripciones: " << subscripciones << endl;
}	

#endif

	