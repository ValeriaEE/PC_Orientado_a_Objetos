#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    bool tieneBoleto;
    bool tieneSubscripcion;
    string tipoSubscripcion;

public:
    // Constructores

	Persona(string nombre, int edad, bool tieneBoleto,
	bool tieneSubscripcion, string tipoSubscripcion);
   

    // Getters y setters
    string getNombre();
    void setNombre(string);

    int getEdad();
    void setEdad(int);

    bool getTieneBoleto();
    void setTieneBoleto(bool);

    bool getTieneSubscripcion();
    void setTieneSubscripcion(bool);

    string getTipoSubscripcion();
    void setTipoSubscripcion(string);

    // Métodos
    void entrarMuseo();
    void salirMuseo();
    void comprarBoleto();
    void comprarSuscripcion(string);
};
//constructores
Persona::Persona(string nombre, int edad, bool tieneBoleto, 
bool tieneSubscripcion, string tipoSubscripcion)
    : nombre(nombre),
	edad(edad),
	tieneBoleto(tieneBoleto),
	tieneSubscripcion(tieneSubscripcion),
	tipoSubscripcion(tipoSubscripcion) {}

// getters y setters 
string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombrePersona) {
    nombre = nombrePersona;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edadPersona) {
    edad = edadPersona;
}

bool Persona::getTieneBoleto() {
    return tieneBoleto;
}

void Persona::setTieneBoleto(bool boleto) {
    tieneBoleto = boleto;
}

bool Persona::getTieneSubscripcion() {
    return tieneSubscripcion;
}

void Persona::setTieneSubscripcion(bool subscripcion) {
    tieneSubscripcion = subscripcion;
}

string Persona::getTipoSubscripcion() {
    return tipoSubscripcion;
}

void Persona::setTipoSubscripcion(string subscripcionTipo) {
    tipoSubscripcion = subscripcionTipo;
}
//Metodos 
void Persona::entrarMuseo() {
    if (tieneBoleto || tieneSubscripcion) {
        cout << nombre << " ha entrado al museo." << endl;
    } else {
        cout << nombre << " no puede entrar al museo. Necesita un boleto o una suscripcion." << endl;
    }
}

void Persona::salirMuseo() {
    cout << nombre << " ha salido del museo." << endl;
}

void Persona::comprarBoleto() {
    tieneBoleto = true;
    cout << nombre << " ha comprado un boleto." << endl;
}

void Persona::comprarSuscripcion(string tipo) {
    tieneSubscripcion = true;
    tipoSubscripcion = tipo; // Guardar el tipo de suscripción
    cout << nombre << " ha adquirido una suscripcion " << tipoSubscripcion << "." << endl;
}

#endif
