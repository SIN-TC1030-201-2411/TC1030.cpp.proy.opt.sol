#pragma once
#include "Envio.hpp"

class Paquete : public Envio {
private:
    double profundo;

    double peso;
    double costoXKg;
public:
    Paquete(std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string, double, double, double, double, double, double);
    double calculaCosto();
};