#include <iostream>

#include "Envio.hpp"
#include "Paquete.hpp"
#include "Sobre.hpp"

int main() 
{
  Envio e1;
  Envio e2("Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220","Diego","Luis Elizondo 357","Mty", "NL","876",3.50,25,10);

  std::cout << "Costo Envio 1: " << e1.calculaCosto() << "\n";
  std::cout << "Costo Envio 2: " << e2.calculaCosto() << "\n";

  Paquete p1("Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220","Diego","Luis Elizondo 357","Mty", "NL","876",3.50,25,10, 2, 1, 0.50);

  std::cout << "Costo Paquete 1: " << p1.calculaCosto() << "\n";

  Sobre s1("Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220","Diego","Luis Elizondo 357","Mty", "NL","876",3.50,25,10,2.50);
  Sobre s2("Diego","Luis Elizondo 357","Mty", "NL","876","Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220",3.50,25,35,2.50);

  std::cout << "Costo Sobre 1: " << s1.calculaCosto() << "\n";
  std::cout << "Costo Sobre 2: " << s2.calculaCosto() << "\n";
}