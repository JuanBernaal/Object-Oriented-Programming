#ifndef AERONAVE
#define AERONAVE

#include <iostream>
#include <vector>
#include "vuelos.h"
#include "mediadorTrafico.h"
#include "puertaEmbarque.h"

using namespace std;
class MediatorDeTrafico; // Declaración previa de MediatorDeTrafico


class Aeronave{
    private:
        MediadorTrafico* mediador;
        string puerta_de_embarque;

        void enviarMensaje(const string& mensaje);
    
    public:

        string marca, modelo, nombre;
        int capacidad, autonomia, fabricacion, velMax, sillasDispo;
        //vector<Vuelos> vuelos;

        
        Aeronave(const string& nombre, MediadorTrafico* mediator);

        void despegar();

        void aterrizar();

        void actualizarPosicion(const string& mensaje);

        void recibirMensaje(const string& mensaje);

        void asignarPuertaDeEmbarque(const string& puerta);

};


#endif