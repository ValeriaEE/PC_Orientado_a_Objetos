#ifndef BICHO_H_
#define BICHO_H_

#include <iostream>
#include <string>

using namespace std;

class Bicho {
protected:
    string nombre;
    string nombre_cientifico;
    string habitat;
    string dieta;
    float tam;
	int seccionMuseo;

public:
   Bicho();
   Bicho(string nombre, string nombre_cientifico, string habitat, string dieta, float tam, int seccionMuseo);
   
   

    // Getters y setters 
	void setNombre(string);
    string getNombre() const {
        return nombre;
    }
	void setNombreCientifico(string);
    string getNombreCientifico() const {
        return nombre_cientifico;
    }
	
	void setHabitat(string);
    string getHabitat() const {
        return habitat;
    }
	
	void setDieta (string);
    string getDieta() const {
        return dieta;
    }
	
	void setTam (float);
    float getTam() const {
        return tam;
    }
	
	void setSeccionMuseo (int);
    int getSeccionMuseo() const {
        return tam;
    }
	
    // Métodos 
    void mostrarInfo() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Nombre Cientifico: " << nombre_cientifico << endl;
        cout << "Habitat: " << habitat << endl;
        cout << "Dieta: " << dieta << endl;
        cout << "Tamaño: " << tam << " metros" << endl;
    }

    void mostrarUbi() const {
        cout << "El bicho '" << nombre << "' se encuentra en la sección de '" << seccionMuseo << "' del museo." << endl;
    }
};

#endif  // BICHO_H_

	