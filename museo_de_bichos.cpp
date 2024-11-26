#include <iostream>
#include "bicho.h"
#include "museo.h"
#include "persona.h"
#include "insecto.h"
#include "aracnido.h"
#include "miriapodo.h"

using namespace std;

Insecto capturarInsecto() {
    string nombre, nombreCientifico, habitat, dieta, tipoMetamorfosis;
    float tam;
    int seccionMuseo, numPatas;

    cout << "Introduce los datos del insecto:\n";
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
    cout << "Número de patas: ";
    cin >> numPatas;
    cout << "Tipo de metamorfosis: ";
    cin >> tipoMetamorfosis;

    return Insecto(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo, numPatas, tipoMetamorfosis);
}

Aracnido capturarAracnido() {
    string nombre, nombreCientifico, habitat, dieta, tipoVeneno;
    float tam;
    int seccionMuseo, numOjos;

    cout << "Introduce los datos del arácnido:\n";
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
    cout << "Número de ojos: ";
    cin >> numOjos;
    cout << "Tipo de veneno: ";
    cin >> tipoVeneno;

    return Aracnido(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo, numOjos, tipoVeneno);
}

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

    return Miriapodo(nombre, nombreCientifico, habitat, dieta, tam, seccionMuseo, numPatasSeccion, largo);
}

int main() {
    Museo museo("Museo de Bichos", "Querétaro", 1, 100);

    string opcionAccion;
    int opcion;

    cout << "Escriba si usted es visitante o organizador: ";
    cin >> opcionAccion;

    if (opcionAccion == "organizador") {
        do {
            cout << "\n--- Menú de Organizador ---\n";
            cout << "1. Agregar un insecto\n";
            cout << "2. Agregar un arácnido\n";
            cout << "3. Agregar un miriápodo\n";
            cout << "4. Vender boletos\n";
            cout << "5. Vender suscripciones\n";
            cout << "6. Salir\n";
            cout << "Elige una opción: ";
            cin >> opcion;

            switch (opcion) {
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
                    cout << "Opción no válida. Intente de nuevo." << endl;
            }
        } while (opcion != 6);
    } else {
        cout << "invitado" << endl;
    }

    return 0;
}

}
