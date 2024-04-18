#include "Envio.hpp"

Envio::Envio() : re_nombre{""}, re_direccion{""}, re_ciudad{""},re_estado{""},re_cp{""},de_nombre{""}, de_direccion{""}, de_ciudad{""},de_estado{""},de_cp{""},costo{0.0}
{}

Envio::Envio(std::string re_nombre,std::string re_direccion,std::string re_ciudad,std::string re_estado,std::string re_cp,std::string de_nombre,std::string de_direccion,std::string de_ciudad,std::string de_estado,std::string de_cp, double largo, double ancho, double costo)
{
    this->re_nombre     =re_nombre;
    this->re_direccion  =re_direccion;
    this->re_ciudad     =re_ciudad;
    this->re_estado     =re_estado;
    this->re_cp         =re_cp;

    this->de_nombre     =de_nombre;
    this->de_direccion  =de_direccion;
    this->de_ciudad     =de_ciudad;
    this->de_estado     =de_estado;
    this->de_cp         =de_cp;

    this->largo         =largo;
    this->ancho         =ancho;
    
    this->costo         =costo;
}

double Envio::calculaCosto()
{
    return costo;
}

