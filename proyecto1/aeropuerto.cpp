#include "aeropuerto.h"

 Aeropuerto::Aeropuerto(){
    vuelos = {};
 }

  void Aeropuerto::agregarDestino(string n){
    vuelos.push_back(n);
  }