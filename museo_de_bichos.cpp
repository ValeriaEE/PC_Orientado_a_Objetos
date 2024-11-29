#include <iostream>
#include "bicho.h"
#include "museo.h"
#include "persona.h"
#include "insecto.h"
#include "aracnido.h"
#include "miriapodo.h"

using namespace std;

//Capturar los datos del objeto visitante de la clase persona 
Persona capturarVisitante() {
    string nombre, tipoSubscripcion;
    int edad; 
	bool tieneBoleto = false, tieneSubscripcion = false;

    cout << "Nombre del visitante: ";
    cin >> nombre;
    cout << "Edad: ";
    cin >> edad;
	
	tipoSubscripcion = "Ninguna"; 

    return Persona(nombre, edad, tieneBoleto, 
	tieneSubscripcion, tipoSubscripcion);
}

//Capturar los datos de la clase insecto
Insecto capturarInsecto() {
    string nombre, nombreCientifico, habitat, dieta, tipoMetamorfosis;
    float tam;
    int seccionMuseo, numPatas;

    cout << "Introduce los datos del insecto:\n";
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Nombre cientifico: ";
    cin >> nombreCientifico;
    cout << "Habitat: ";
    cin >> habitat;
    cout << "Dieta: ";
    cin >> dieta;
    cout << "Tamaño (cm): ";
    cin >> tam;
    cout << "Seccion del museo: ";
    cin >> seccionMuseo;
    cout << "Numero de patas: ";
    cin >> numPatas;
    cout << "Tipo de metamorfosis: ";
    cin >> tipoMetamorfosis;

    return Insecto(nombre, nombreCientifico, habitat, dieta, tam,
	seccionMuseo, numPatas, tipoMetamorfosis);
}

// Capturar los datos de la clase aracnido
Aracnido capturarAracnido() {
    string nombre, nombreCientifico, habitat, dieta, tipoVeneno;
    float tam;
    int seccionMuseo, numOjos;

    cout << "Introduce los datos del aracnido:\n";
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Nombre cientifico: ";
    cin >> nombreCientifico;
    cout << "Habitat: ";
    cin >> habitat;
    cout << "Dieta: ";
    cin >> dieta;
    cout << "Tamaño (cm): ";
    cin >> tam;
    cout << "Seccion del museo: ";
    cin >> seccionMuseo;
    cout << "Numero de ojos: ";
    cin >> numOjos;
    cout << "Tipo de veneno: ";
    cin >> tipoVeneno;

    return Aracnido(nombre, nombreCientifico, habitat, 
	dieta, tam, seccionMuseo, numOjos, tipoVeneno);
}

//Capturar los datos de de la clase miriapodo
Miriapodo capturarMiriapodo() {
    string nombre, nombreCientifico, habitat, dieta;
    float tam, largo;
    int seccionMuseo, numPatasSeccion;

    cout << "Introduce los datos del miriápodo:\n";
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Nombre científico: ";
    cin >> nombreCientifico;
    cout << "Hábitat: ";
    cin >> habitat;
    cout << "Dieta: ";
    cin >> dieta;
    cout << "Tamaño (cm): ";
    cin >> tam;
    cout << "Sección del museo: ";
    cin >> seccionMuseo;
    cout << "Número de patas por sección: ";
    cin >> numPatasSeccion;
    cout << "Largo (cm): ";
    cin >> largo;

    return Miriapodo(nombre, nombreCientifico, habitat, dieta, tam, 
	seccionMuseo, numPatasSeccion, largo);
}

int main() {
	//Crear el objeto museo 
    Museo museo("Museo de Bichos", "Querétaro", 1, 100, 0, 0, 0);
	
	// Crear varios objetos para tener una coleccion de bichos 
	Insecto insecto1 (
	"Polilla Luna",
	"Actias luna", 
	"Bosques templados", 
	"hojas de nogal y abedul", 
	11.5, 1, 6, 
	"Completa" );
	Insecto insecto2 (
	"Escarabajo Hercules", 
	"Dynastes hercules",
	"Selvas Tropicales",
	"Frutas y savia", 
	15.3, 2, 6, 
	"Completa");
	Aracnido aracnido1 (
	"Tarantula Rosa Chilena",
	"Grammostola rosea",
	"Desiertos",
	"Insectos pequeños, lagartijas y ratones pequeños", 
	13.2, 3, 8,
	"Neurotóxico leve (inofensivo para humanos)");
	Aracnido aracnido2 (
	"Escorpion Emperador", 
	"Pandinus imperator", 
	"Selvas Tropicales", 
	"Insectos y arañas", 
	14.6, 4, 8, 
	"Neurotóxico leve (inofensivo para humanos)");
	Miriapodo miriapodo1 (
	"Ciempiés Gigante",       
    "Scolopendra gigantea",    
    "Selvas tropicales",      
    "Insectos, pequeños roedores y anfibios",
    30.0, 5, 21, 2.5);                      
	Miriapodo miriapodo2 (
	"Milpiés Africano Gigante",
	"Archispirostreptus gigas",
	"Bosques tropicales",
	"Hojas en descomposición y materia orgánica", 
	25.0,3,6,1.5); 
	
	

    string opcionAccion;
    int opcionOrg;
	int opcionVis;
	int opcionEntrada;
	
// Empieza el menu 
    cout << "Escriba si usted es visitante o organizador: ";
    cin >> opcionAccion;

    if (opcionAccion == "organizador") {
        do {
            cout << "\n--- Menu de Organizador ---\n";
            cout << "1. Agregar un insecto\n";
            cout << "2. Agregar un aracnido\n";
            cout << "3. Agregar un miriapodo\n";
            cout << "4. Vender boletos\n";
            cout << "5. Vender suscripciones\n";
            cout << "6. Salir\n";
            cout << "Elige una opcion: ";
            cin >> opcionOrg;

            switch (opcionOrg) {
                case 1: {
                    Insecto insecto = capturarInsecto();
                    museo.agregarInsecto(insecto);
                    break;
                }
                case 2: {
                    Aracnido aracnido = capturarAracnido();
                    museo.agregarAracnido(aracnido);
                    break;
                }
                case 3: {
                    Miriapodo miriapodo = capturarMiriapodo();
                    museo.agregarMiriapodo(miriapodo);
                    break;
                }
                case 4: {
                    int cantidad;
                    cout << "Cantidad de boletos a vender: ";
                    cin >> cantidad;
                    museo.venderBoletos(cantidad);
                    break;
                }
                case 5:
                    museo.venderSubscripcion();
                    break;
                case 6:
                    cout << "Saliendo del programa..." << endl;
                    break;
                default:
                    cout << "Opcion no válida. Intente de nuevo." << endl;
            }
        } while (opcionOrg != 6);
    } 
	
	if (opcionAccion == "visitante") {
		Persona visitante = capturarVisitante();
        do {
            cout << "\n--- Menu de Visitante ---\n";
            cout << "1. Ver Info del Museo\n";
            cout << "2. Comprar Boleto\n";
            cout << "3. Comprar Subscripcion \n";
            cout << "4. Entrar al Museo\n";
            cout << "5. Salir\n";
            cout << "Elige una opcion: ";
            cin >> opcionVis;

            switch (opcionVis) {
                case 1: {
                    museo.mostrarInfoMuseo(); 
                    break;
                }
                case 2: {
                    visitante.comprarBoleto(); 
                    break;
                }
                case 3: {
					string tipo; 
					cout << "Escriba el tipo de subscripcion que quiera adquirir" << endl;
					cin >> tipo;
                    visitante.comprarSuscripcion(tipo);
                    break;
                }
                case 4: {
                    visitante.entrarMuseo();
                    break;
                }
                case 5:
                    cout << "Saliendo del programa..." << endl;
                    break;
                default:
                    cout << "Opcion no válida. Intente de nuevo." << endl;
            }
        } while (opcionVis != 4 && opcionVis !=5);
		
		if (opcionVis == 4) {
			do {
            cout << "\n¿Que quieres hacer dentro del museo ?\n";
            cout << "1. Ver Mapa\n";
            cout << "2. Ver exibiciones disponibles\n";
            cout << "3. Ver info de los bichos \n";
            cout << "4. Salir del Museo\n";
            cout << "Elige una opcion: ";
            cin >> opcionEntrada;

            switch (opcionEntrada) {
                case 1: {
                    museo.mostrarMapa(); 
                    break;
                }
                case 2: {
                    museo.mostrarExhibiciones(); 
                    break;
                }
                case 3: {
					int seccion; 
					cout << "Elija la seccion del museo en la cual quiere ver los bichos" << endl;					
                    museo.mostrarExhibiciones();
					cin >> seccion;
					switch (seccion){
						case 1: {insecto1.mostrarInfo();
						break;}
						case 2: {insecto2.mostrarInfo();
						break;}
						case 3: {aracnido1.mostrarInfo();
						break;}
						case 4: {aracnido2.mostrarInfo();
						break;}
						case 5: {miriapodo1.mostrarInfo();
						miriapodo2.mostrarInfo();
						break;}
						default:
							cout << "Opcion no válida. Intente de nuevo." << endl;
					}
                    break;
                }
                case 4: {
                    visitante.salirMuseo();
                    break;
					}
                default:
                    cout << "Opcion no válida. Intente de nuevo." << endl;
            }
			} while (opcionEntrada != 4);
		
		}
	} 
	
    return 0;
} 


