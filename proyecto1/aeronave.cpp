#include "aeronave.h"

void Aeronave::enviarMensaje(const string& mensaje) {
        mediador->enviarMensaje(mensaje, this);
}

Aeronave:: Aeronave(const string& nombre, MediadorTrafico* mediator) : nombre(nombre), mediador(mediator) {
    mediator->registrarAeronave(this);
    marca = "Avianca";
    modelo = "2019";
    capacidad = 700;
    //vuelos = {};
}

void Aeronave::despegar() {
    cout << nombre << ": Despegando." << endl;
    enviarMensaje("Despegando");
}

void Aeronave::aterrizar() {
    cout << nombre << ": Aterrizando." << endl;
    enviarMensaje("Aterrizando");
}

void Aeronave::actualizarPosicion(const string& mensaje) {
    cout << nombre << ": Actualizando posición a " << mensaje << endl;
    enviarMensaje("Nueva posición: " + mensaje);
}

void Aeronave::recibirMensaje(const string& mensaje) {
    cout << nombre << " recibió mensaje: " << mensaje << endl;
}

void Aeronave::asignarPuertaDeEmbarque(const string& puerta) {
    cout << nombre << " se dirige a la puerta de embarque: " << puerta << endl;
    puerta_de_embarque = puerta;
}


