#ifndef AVION
#define AVION

#include<iostream>
#include "aeronave.h"
using namespace std;


class Avion : public Aeronave{
private:
    int altitudMax, numMotores, categoria;
public:
    Avion(string& marca, string& modelo, int capacidad, int velMax, int autonomia, int fabricationYear, vector<Vuelos>& vuelos, int sillasDispo, MediadorTrafico* mediator, int altitudMax, int numMotores, int categoria);
    int getAltitudMax(), getNumMotores(), getCategoria();
};



#endif