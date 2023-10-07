#include "jet.h"

JetPrivado::JetPrivado(string& marca, string& modelo, int capacidad, int velMax, int autonomia, int fabricationYear, vector<Vuelos>& vuelos, int sillasDispo, MediadorTrafico* mediator, string& propiertario, vector<string>& listaServicios, vector<string>& listaDestinos)
: Aeronave(marca, modelo, capacidad, velMax, autonomia, fabricationYear, vuelos, sillasDispo, mediator){
    this->propietario = propietario;
    this->listaDestinos = listaDestinos;
    this->listaServicios = listaServicios;
}

string JetPrivado::getPropietario(){
    return this->propietario;
}
