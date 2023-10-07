#ifndef HELICOPTERO
#define HELICOPTERO

#include<iostream>
#include "aeronave.h"
using namespace std;

class Aeronave;

class Helicoptero : public Aeronave{
private:
    int numRotores, maxElevacion;
    string uso;
public:
    Helicoptero(string& marca, string& modelo, int capacidad, int velMax, int autonomia, int fabricationYear, vector<Vuelos>& vuelos, int sillasDispo, MediadorTrafico* mediator, int numRotores, int maxElevacion, string& uso);
    int getNumRotores();
    int getMaxElevacion();
    string getUso();
};

#endif