#ifndef AEROPUERTO
#define AEROPUERTO 

#include <iostream>
#include <vector>
#include "torreControl.h"
using namespace std;

class Aeropuerto{
    vector<string> vuelos;
    public:
        TorreControl torreControl;
        
    Aeropuerto();
    void agregarDestino(string n);
};


#endif 