#include "avion.h"

Avion::Avion(string& marca, string& modelo, int capacidad, int velMax, int autonomia, int fabricationYear, vector<Vuelos>& vuelos, int sillasDispo, MediadorTrafico* mediator, int altitudMax, int numMotores, int categoria)
: Aeronave(marca, modelo, capacidad, velMax, autonomia, fabricationYear, vuelos, sillasDispo, mediator){
    this->altitudMax = altitudMax;
    this->numMotores = numMotores;
    this->categoria = categoria;
}

int Avion::getAltitudMax(){
    return this->altitudMax;
}

int Avion::getCategoria(){
    return this->categoria;
}

int Avion::getNumMotores(){
    return this->numMotores;
}