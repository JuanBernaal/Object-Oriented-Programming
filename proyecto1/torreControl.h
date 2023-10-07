#ifndef TORRE_CONTROL
#define TORRE_CONTROL

#include <iostream> 
#include "mediadorTrafico.h"
#include "puertaEmbarque.h"
#include "aeronave.h"
using namespace std;


class TorreControl : public MediadorTrafico{
    private:
        vector<Aeronave*> aeronaves;
    public:

    TorreControl(){}

    void registrarAeronave(Aeronave* aeronave) override;

    void enviarMensaje(const string& mensaje, Aeronave* emisor) override ;

    void asignarPuertaDeEmbarque(Aeronave* aeronave, const string& puerta) override ;

};

#endif