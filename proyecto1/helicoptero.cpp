#include "helicoptero.h"

Helicoptero::Helicoptero(string& marca, string& modelo, int capacidad, int velMax, int autonomia, int fabricationYear, vector<Vuelos>& vuelos, int sillasDispo, MediadorTrafico* mediator, int numRotores, int maxElevacion, string& uso)
: Aeronave(marca, modelo, capacidad, velMax, autonomia, fabricationYear, vuelos, sillasDispo, mediator){
    this->maxElevacion = maxElevacion;
    this->numRotores = numRotores;
    this->uso = uso;
}

int Helicoptero::getNumRotores(){
    return this->numRotores;
}
int Helicoptero::getMaxElevacion(){
    return this->maxElevacion;
}
string Helicoptero::getUso(){
    return this->uso;
}