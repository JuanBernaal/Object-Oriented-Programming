#include "jet.h"

JetPrivado::JetPrivado(const string &marca, int capacidad, MediadorTrafico *mediator) : Aeronave(marca, capacidad, mediator)
{
    propietario = "";
    listaServicios.clear();
    listaDestinos.clear();
}

string JetPrivado::getPropietario()
{
    return this->propietario;
}

void JetPrivado::printInfo()
{
    Aeronave::printInfo();
}

void JetPrivado::obtenerDatos(){
    cout << "Ingrese el nombre del propietario: ";
    cin >> this->propietario;
    cout << endl;
}

void JetPrivado::imprimirListaServicios(){
    cout << "Lista de Servicios:" << endl;
    for (int i = 0; i < listaServicios.size(); i++){
        cout << "- " << listaServicios[i] << endl;
    }
}

// Función para imprimir la lista de destinos
void JetPrivado::imprimirListaDestinos(){
    cout << "Lista de Destinos:" << endl;
    for (int i = 0; i < listaDestinos.size(); i++){
        cout << "- " << listaDestinos[i] << endl;
    }
}


