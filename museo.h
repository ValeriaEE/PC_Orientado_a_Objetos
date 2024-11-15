#ifndef MUSEO_H_
#define MUSEO_H_

#include <iostream>
#include <string>

using namespace std;

class Museo {
protected:
    string nombre;
    string ubicacion;
	int numSede;
	int boletosDisponibles;
	int subscripciones;

public:
   Museo();
   Museo(string nombre, string ubicacion, int numSede, int boletosDisponibles, int subscripciones);
  

   

    // Getters y setters 
	void setNombre(string);
    string getNombre() const {
        return nombre;
    }
	void setUbicacion(string);
    string getUbicacion() const {
        return ubicacion;
    }
	
	void setnumSede (int);
    int getnumSede() const {
        return numSede;
    }
	
	void setboletosDisponibles (int);
    int getboletosDisponibles() const {
        return boletosDisponibles;
    }
	
	void setsubscripciones (int);
    int getsubscripciones() const {
        return subscripciones;
    }
	
    // Métodos 
   void entradaPersonas (bool tieneBoleto) {
        if (tieneBoleto) {
            cout << "Bienvenido al museo de bichos. ¡Disfruta tu visita!" << endl;
        } else {
            cout << "No puedes entrar sin un boleto. Por favor compra uno en la taquilla." << endl;
        }
    } 
	
	void mostrarExhibiciones () const {
		cout << "Exhibiciones disponibles en el museo" << endl;
	}
	
	void mostrarMapa() const {
		cout << "Mapa" << endl;
	} 
	
	void venderBoletos(int cantidad) {
        if (cantidad <= boletosDisponibles) {
            boletosDisponibles -= cantidad;
            cout << "Se han vendido " << cantidad << " boletos. Quedan " << boletosDisponibles << " boletos disponibles." << endl;
        } else {
            cout << "Lo siento, no hay suficientes boletos disponibles. Solo quedan " << boletosDisponibles << " boletos." << endl;
        }
    }

	 void venderSubscripcion() {
        subscripciones++;
        cout << "Se ha vendido una nueva suscripción. Total de subscripciones: " << subscripciones << endl;
    }
};
	
#endif

	