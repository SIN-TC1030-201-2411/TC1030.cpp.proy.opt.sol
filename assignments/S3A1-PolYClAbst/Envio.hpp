#pragma once
#include <iostream>
#include <string>

class Envio
{
protected:
    std::string re_nombre;
    std::string re_direccion;
    std::string re_ciudad;
    std::string re_estado;
    std::string re_cp;

    std::string de_nombre;
    std::string de_direccion;
    std::string de_ciudad;
    std::string de_estado;
    std::string de_cp;

    double largo;
    double ancho;

    double costo;

public:
    Envio();
    Envio(std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string, double, double, double);

    virtual ~Envio();

    void print_reDir();
    void print_deDir();

    virtual double calculaCosto();
};