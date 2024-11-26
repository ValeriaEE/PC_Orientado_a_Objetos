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

public:
    // Constructores
    Museo() 
        : nombre(""), ubicacion(""), numSede(0), boletosDisp(0), numInsectos(0), numAracnidos(0), numMiriapodos(0) {}

    Museo(string nombre, string ubicacion, int numSede, int boletosDisp)
        : nombre(nombre), ubicacion(ubicacion), numSede(numSede), boletosDisp(boletosDisp), numInsectos(0), numAracnidos(0), numMiriapodos(0) {}

    // Métodos para agregar bichos
    void agregarInsecto(const Insecto& insecto) {
        if (numInsectos < 30) {
            insectos[numInsectos] = insecto;
            numInsectos++;
            cout << insecto.getNombre() << " ha sido agregado a la colección de insectos del museo." << endl;
        } else {
            cout << "No se pueden agregar más insectos. La colección está llena." << endl;
        }
    }

    void agregarAracnido(const Aracnido& aracnido) {
        if (numAracnidos < 30) {
            aracnidos[numAracnidos] = aracnido;
            numAracnidos++;
            cout << aracnido.getNombre() << " ha sido agregado a la colección de arácnidos del museo." << endl;
        } else {
            cout << "No se pueden agregar más arácnidos. La colección está llena." << endl;
        }
    }

    void agregarMiriapodo(const Miriapodo& miriapodo) {
        if (numMiriapodos < 30) {
            miriapodos[numMiriapodos] = miriapodo;
            numMiriapodos++;
            cout << miriapodo.getNombre() << " ha sido agregado a la colección de miriápodos del museo." << endl;
        } else {
            cout << "No se pueden agregar más miriápodos. La colección está llena." << endl;
        }
    }

    //  getters y setters

	string getNombre();
	void setNombre(string);

	string getUbicacion();
	void setUbicacion(string);

	int getNumSede();
	void setNumSede(int);

	int getBoletosDisp();
	void setBoletosDisp(int);


    // Métodos para el museo
    void mostrarInfoMuseo() const {
        cout << "Información del museo:" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Ubicación: " << ubicacion << endl;
        cout << "Número de sede: " << numSede << endl;
    }

    void mostrarMapa() const { cout << "Mapa del museo." << endl; }

    void mostrarExhibiciones() const { cout << "Exhibiciones disponibles en el museo." << endl; }

    void venderBoletos(int cantidad) {
        if (cantidad <= boletosDisp) {
            boletosDisp -= cantidad;
            cout << "Se han vendido " << cantidad << " boletos. Quedan " << boletosDisp << " boletos disponibles." << endl;
        } else {
            cout << "Lo siento, no hay suficientes boletos disponibles. Solo quedan " << boletosDisp << " boletos." << endl;
        }
    }

    void venderSubscripcion() {
        int subscripciones = 0;
        subscripciones++;
        cout << "Se ha vendido una nueva suscripción. Total de suscripciones: " << subscripciones << endl;
    }
};

#endif

	
