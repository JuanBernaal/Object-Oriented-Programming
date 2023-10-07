#include "torreControl.h"

    
void TorreControl::registrarAeronave(Aeronave* aeronave)  {
    aeronaves.push_back(aeronave);
}

void TorreControl::enviarMensaje(const string& mensaje, Aeronave* emisor)  {
    for (auto& aeronave : aeronaves) {
        if (aeronave != emisor) {
            aeronave->recibirMensaje(mensaje);
        }
    }
}

void TorreControl::asignarPuertaDeEmbarque(Aeronave* aeronave, const string& puerta)  {
    aeronave->asignarPuertaDeEmbarque(puerta);
}