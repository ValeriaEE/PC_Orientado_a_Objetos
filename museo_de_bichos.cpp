#include <iostream>



using namespace std;
#include "bicho.h"
#include "museo.h"
#include "persona.h"

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

    // Crear un objeto de la clase Bicho
	
	Bicho bicho1 ("Mariposa Monarca", "Danaus plexippus", "Bosques temblados", "Nectar", 01, 2);
    cout << "\nInformacion del Bicho:" << endl;
    bicho1.mostrarInfo();
	bicho1.mostrarUbi();
    
    return 0;
}
