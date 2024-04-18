#include "Paquete.hpp"

Paquete::Paquete(std::string re_nombre,std::string re_direccion,std::string re_ciudad,std::string re_estado,std::string re_cp,std::string de_nombre,std::string de_direccion,std::string de_ciudad,std::string de_estado,std::string de_cp, double costo, double largo, double ancho, double profundo, double peso, double costoXKg)
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

    this->costo         =costo;
    
    this->largo         =largo;
    this->ancho         =ancho;
    this->profundo      =profundo;

    this->peso          =peso > 0?peso:0;
    this->costoXKg      =costoXKg > 0?costoXKg:0;
}

double Paquete::calculaCosto()
{
    return peso * costoXKg + costo;
}