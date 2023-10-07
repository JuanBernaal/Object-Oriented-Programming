#ifndef JET
#define JET

#include<iostream>
#include "aeronave.h"
using namespace std;

class Aeronave;

class JetPrivado : public Aeronave{
private:
    string propietario;
    vector<string> listaServicios, listaDestinos;
public:
    JetPrivado(string& marca, string& modelo, int capacidad, int velMax, int autonomia, int fabricationYear, vector<Vuelos>& vuelos, int sillasDispo, MediadorTrafico* mediator, string& propiertario, vector<string>& listaServicios, vector<string>& listaDestinos);
    string getPropietario();
};



#endif