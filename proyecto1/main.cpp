#include "aeropuerto.h"

void printLinea(){
    printf("===========================================================================================\n");
}

int main(){
Aeropuerto aeropuerto;

    Aeronave aeronave1("Aeronave 1", &aeropuerto.torreControl);
    Aeronave aeronave2("Aeronave 2", &aeropuerto.torreControl);
    Aeronave aeronave3("Aeronave 3", &aeropuerto.torreControl);

    PuertaEmbarque puerta1(1);
    PuertaEmbarque puerta2(2);
    PuertaEmbarque puerta3(3);

    Vuelos vuelo1(aeronave1.capacidad, "BGO", "12:00", 61281);
    vuelo1.printVuelo();
    aeropuerto.agregarDestino(vuelo1.ciudadDestino);

    aeronave1.agregarVuelo(vuelo1);
    aeronave1.agregarVuelo(vuelo1);
    aeronave1.agregarVuelo(vuelo1);
    aeronave1.agregarVuelo(vuelo1);

/*     aeropuerto.torreControl.asignarPuertaDeEmbarque(&aeronave1, "Puerta 1");
    aeropuerto.torreControl.asignarPuertaDeEmbarque(&aeronave2, "Puerta 2");
    aeropuerto.torreControl.asignarPuertaDeEmbarque(&aeronave3, "Puerta 3");

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
    puerta3.anunciarEmbarque("Puerta 3"); */

    bool salir = true;
    int selec;
    printLinea();
    while (salir)
    {
        printf("Bienvenido a vuelaComoTuEx.com, ¿Deseas comprar un vuelo?\n1. Si\n2. No\n");
        cin >> selec;
        switch (selec)
        {
        case 1:
            printf("Holaa\n");
            break;
        case 2:
            printf("Te esperamos para la proxima, saliendo...");
            salir = false;
        default:
            printf("Seleccion erronea, saliendo...");
            salir = false;
            break;
        }
          printLinea();
    }
    printf("Hola perra\n");
    return 0;
}
