#ifndef BICHO_H_
#define BICHO_H_

#include <iostream>
#include <string>

using namespace std;

class Bicho {
private:
    string nombre;
    string nombreCientifico;
    string habitat;
    string dieta;
    float tam;
	int seccionMuseo;

public:
//costructores
	Bicho() {
		nombre = ""; 
		nombreCientifico = "";
		habitat = "";
		dieta = "";
		tam = 0.0;
		seccionMuseo = 0;
		}

	Bicho(string nombre,
	string nombreCientifico,
	string habitat,
	string dieta, 
	float tam, 
	int seccionMuseo);
    
	//prototipos de los getters y setters 
	//nombre 
	string getNombre ();        
    void setNombre(string);
	
	//nombre cientifico
	string getNombreCientifico();
	void setNombreCientifico(string);
	
	//habitat 
	string getHabitat();
	void setHabitat(string);
	
	//dieta
	string getDieta();
	void setDieta(string);
	
	//tamaño
	float getTam();
	void setTam(float);
	
	//seccion del museo 
    int getSeccionMuseo();               
    void setSeccionMuseo(int);           

	void mostrarInfo();
	void mostrarUbi();
   
    
    
};
// Constructor parametrizado
Bicho::Bicho(string nombre, string nombreCientifico,
 string habitat, string dieta, float tam, int seccionMuseo) 
	: nombre(nombre), nombreCientifico(nombreCientifico), 
	habitat(habitat), dieta(dieta), tam(tam), seccionMuseo(seccionMuseo) {}
	

// Definición de los métodos fuera de la clase 
//nombre
string Bicho::getNombre() {
    return nombre;
}

void Bicho::setNombre(string nombreBicho) {
    nombre = nombreBicho;
}

//nombre cientifico
string Bicho::getNombreCientifico() {
    return nombreCientifico;
}

void Bicho::setNombreCientifico(string cientificoBicho) {
    nombreCientifico = cientificoBicho;
}

//habitat 
string Bicho::getHabitat() {
    return habitat;
}

void Bicho::setHabitat(string habitatBicho) {
    habitat = habitatBicho;
}

//dieta 
string Bicho::getDieta() {
    return dieta;
}

void Bicho::setDieta(string dietaBicho) {
    dieta = dietaBicho;
}

//tamaño
float Bicho::getTam() {
    return tam;
}

void Bicho::setTam(float tamBicho) {
    tam = tamBicho;
}

//seccion del museo 
int Bicho::getSeccionMuseo() {
    return seccionMuseo;
}
//metodos 
void Bicho::setSeccionMuseo(int seccionBicho) {
    seccionMuseo = seccionBicho;
}

void Bicho::mostrarInfo()  {
	cout << "Nombre: " << nombre << endl;
	cout << "Nombre Cientifico: " << nombreCientifico << endl;
	cout << "Habitat: " << habitat << endl;
	cout << "Dieta: " << dieta << endl;
	cout << "Tamano: " << tam << " cm" << endl;
}

void Bicho::mostrarUbi() {
	cout << "El bicho " << nombre << " se encuentra en la seccion " << seccionMuseo << " del museo." << endl;
}

#endif  // BICHO_H_

	