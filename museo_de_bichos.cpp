#include <iostream>
#include "persona.h"
#include "museo.h"
#include "bicho.h"

using namespace std;

int main() {
    // Crear un objeto de la clase Museo
    Museo museo("Museo de Bichos", "Queretaro", 10, 100, 50);
 
    
    cout << "Información del museo:" << endl;
    cout << "Nombre: " << museo.getNombre() << endl;
    cout << "Ubicación: " << museo.getUbicacion() << endl;
    cout << "Número de sede: " << museo.getnumSede() << endl;

    museo.mostrarExhibiciones();
    museo.mostrarMapa();

    // Crear un objeto de la clase Persona
    Persona persona(false, "Valeria Escalante", 25, "Ninguna");
    persona.comprarBoleto();
    persona.entrarMuseo();
    persona.salirMuseo();
    persona.comprarSuscripcion("Anual");

    // Crear un objeto de la clase Bicho
    Bicho bicho("Mariposa Monarca", "Danaus plexippus", "Bosques templados", "Néctar", 0.1);
    
    cout << "\nInformación del Bicho:" << endl;
    bicho.mostrarInfo();
    
    return 0;
}
