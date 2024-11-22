#include <iostream>



using namespace std;
#include "bicho.h"
#include "museo.h"
#include "persona.h"
#include "insecto.h"

int main() {
    // Crear un objeto de la clase Museo
    Museo museo("Museo de Bichos", "Queretaro", 10, 100, true, true);

    museo.mostrarExhibiciones();
	museo.mostrarInfoMuseo();
    museo.mostrarMapa();
	int cantidad = 0;
	cin >> cantidad;
	museo.venderBoletos(cantidad);
	museo.venderSubscripcion();
	

    // Crear un objeto de la clase Persona
    Persona persona1 ("Valeria", 19, false, false, "Ninguna");
	persona1.comprarBoleto(); 
	persona1.entrarMuseo();

	
	Insecto mariposa(
        "Mariposa Monarca",           // Nombre
        "Danaus plexippus",           // Nombre científico
        "Bosques templados",          // Hábitat
        "Néctar",                     // Dieta
        10.5,                         // Tamaño en cm
        2,                            // Sección del museo
        6,                            // Número de patas
        "Completa"                    // Tipo de metamorfosis
    );

    // Mostrar información del insecto
    cout << "Informacion del insecto:" << endl;
    mariposa.mostrarInfo();
	mariposa.mostrarUbi(); 
    
    return 0;
}
