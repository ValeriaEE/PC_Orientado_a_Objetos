#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:

	bool tieneBoleto;
	string nombre;
	int edad;
	string tipoSubscripcion;
	

public:
   Persona();
   Persona(bool tieneBoleto, string nombre, int edad, string tipoSubscripcion);
   
   //getters and setters
   
   void settieneBoleto(bool);
   bool gettienBoleto() const {
        return tieneBoleto;
    }
   
   void setNombre(string);
    string getNombre() const {
        return nombre;
    }
	
	void setedad(int);
    int getedad() const {
        return edad;
    }
	
	void settipoSubscription(string);
    string gettipoSubscripcion() const {
        return nombre;
    }
	
	//metodos
	
	void entrarMuseo() {
        if (tieneBoleto) {
            cout << nombre << " ha entrado al museo." << endl;
        } else {
            cout << nombre << " no puede entrar al museo. Necesita un boleto o una suscripción." << endl;
        }
    }
	
	void salirMuseo() {
        cout << nombre << " ha salido del museo." << endl;
    }
	
	void comprarBoleto() {
        if (!tieneBoleto) {
            tieneBoleto = true;
            cout << nombre << " ha comprado un boleto." << endl;
        } else {
            cout << nombre << " ya tiene un boleto." << endl;
        }
    }
	
	void comprarSuscripcion(string tipo) {
        tipoSubscripcion = tipo;
        cout << nombre << " ha adquirido una suscripción de tipo: " << tipo << "." << endl;
    }
	
	
};
	
#endif