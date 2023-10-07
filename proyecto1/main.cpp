#include "aeropuerto.h"
#include <algorithm>

void printLinea(){
    printf("===========================================================================================\n");
}

int main(){
Aeropuerto aeropuerto;

    /* Aeronave aeronave1("Aeronave 1", &aeropuerto.torreControl);
    Aeronave aeronave2("Aeronave 2", &aeropuerto.torreControl);
    Aeronave aeronave3("Aeronave 3", &aeropuerto.torreControl);

    PuertaEmbarque puerta1(1);
    PuertaEmbarque puerta2(2);
    PuertaEmbarque puerta3(3);

    Vuelos vuelo1(aeronave1.capacidad, "BGO", "12:00", 61281);
    Vuelos vuelo2(aeronave2.capacidad, "NYK", "15:00", 443);
    Vuelos vuelo3(aeronave3.capacidad, "MED", "8:00", 32533);

    aeropuerto.agregarDestino(&vuelo1);
    aeropuerto.agregarDestino(&vuelo2);
    aeropuerto.agregarDestino(&vuelo3);

    aeronave1.agregarVuelo(vuelo1);
    aeronave1.agregarVuelo(vuelo2);
    aeronave1.agregarVuelo(vuelo3);

    aeropuerto.torreControl.asignarPuertaDeEmbarque(&aeronave1, "Puerta 1");
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
    puerta3.anunciarEmbarque("Puerta 3");

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
            printf("Seleccione el destino\n");
            aeropuerto.printDestinos();

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
    printf("Hola perra\n");  */

    string nombre = "Juan";
    string apellido = "Perez";
    int edad = 30;
    string cedula = "1234567890";
    string fechaNacimiento = "01/01/1990";
    string genero = "Masculino";
    string direccion = "Calle Principal 123";
    string numTel = "555-123-4567";
    string correo = "juan@example.com";
    string nacionalidad = "Mexicana";
    string infoMedica = "Ninguna";
    int numMaletasBodega = 2;

    Pasajero juanPerez(nombre, apellido, edad, cedula, fechaNacimiento, genero, direccion, numTel, correo, nacionalidad, infoMedica, numMaletasBodega);

    std::cout << "Nombre: " << juanPerez.getNombre() << std::endl;
    std::cout << "Edad: " << juanPerez.getEdad() << std::endl;
    std::cout << "Número de Maletas de Bodega: " << juanPerez.getNumMaletas() << std::endl;


    return 0;
}
