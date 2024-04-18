#pragma once
#include "Envio.hpp"

class Sobre : public Envio {
private:
    double cargoAdicional;
public:
    Sobre(std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string, double, double, double, double);
    double calculaCosto() override;
};