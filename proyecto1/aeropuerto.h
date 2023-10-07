#ifndef AEROPUERTO
#define AEROPUERTO 

#include <iostream>
#include <vector>
#include "torreControl.h"
using namespace std;

class Aeropuerto{
    vector<Vuelos*> vuelos;
    public:
        TorreControl torreControl;
        
    Aeropuerto();
    void agregarDestino(Vuelos* v);
    void printDestinos();
};


#endif 