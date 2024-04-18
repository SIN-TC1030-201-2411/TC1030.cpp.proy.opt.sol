#include <iostream>
#include "fraccion.hpp"

int main() 
{
  fraccion f1{1,3},f2{1,4}, f3, f4, f5, f6;

  f3 = f1 + f2;
  std::cout << f3;
  f3.fprint();

  f4 = f1 * f2;
  std::cout << f4;
  f4.fprint();

  f5 = f1 - f2;
  std::cout << f5;
  f5.fprint();

  f6 = f1 / f2;
  std::cout << f6;
  f6.fprint();

  if (f4==f5) {
    std::cout << "Fraccion 4 == Fraccion 5 \n";
  }
  else {
    std::cout << "Fraccion 4 != Fraccion 5 \n";
  }

  if (f1 > f2) {
    std::cout << "Fraccion 1 > Fraccion 2 \n";
  }
  else {
    std::cout << "Fraccion 1 <= Fraccion 2 \n";
  } 

  if (f2 < f1) {
    std::cout << "Fraccion 2 < Fraccion 1 \n";
  }
  else {
    std::cout << "Fraccion 2 >= Fraccion 1 \n";
  } 

  f1.print(3);
  f4.print(2);
  f5.print(0);
}
