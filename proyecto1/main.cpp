#include "aeropuerto.h"

int main(){
    TorreControl torreDeControl;

    Aeronave aeronave1("Aeronave 1", &torreDeControl);
    Aeronave aeronave2("Aeronave 2", &torreDeControl);
    Aeronave aeronave3("Aeronave 3", &torreDeControl);

    PuertaEmbarque puerta1(1);
    PuertaEmbarque puerta2(2);
    PuertaEmbarque puerta3(3);

    torreDeControl.asignarPuertaDeEmbarque(&aeronave1, "Puerta 1");
    torreDeControl.asignarPuertaDeEmbarque(&aeronave2, "Puerta 2");
    torreDeControl.asignarPuertaDeEmbarque(&aeronave3, "Puerta 3");

    aeronave1.despegar();
    aeronave2.despegar();
    aeronave3.despegar();

    aeronave1.actualizarPosicion("Lat: 40.7128, Lon: -74.0060");
    aeronave2.actualizarPosicion("Lat: 34.0522, Lon: -118.2437");
    aeronave3.actualizarPosicion("Lat: 51.5074, Lon: -0.1278");

    aeronave1.aterrizar();
    aeronave2.aterrizar();
    aeronave3.aterrizar();

    puerta1.anunciarEmbarque("Puerta 1");
    puerta2.anunciarEmbarque("Puerta 2");
    puerta3.anunciarEmbarque("Puerta 3");

    printf("Hola perra\n");
    return 0;
}