#include "Envio.hpp"

Envio::Envio() : re_nombre{""}, re_direccion{""}, re_ciudad{""},re_estado{""},re_cp{""},de_nombre{""}, de_direccion{""}, de_ciudad{""},de_estado{""},de_cp{""},costo{0.0}
{}

Envio::~Envio()
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

void Envio::print_reDir()
{
    std::cout << "Remitente\n";
    std::cout << "---------\n";
    std::cout << this->re_nombre << "\n";
    std::cout << this->re_direccion << "\n";
    std::cout << this->re_ciudad << ", " << this->re_estado <<", C.P." << this->re_cp << "\n\n";
}

void Envio::print_deDir()
{
    std::cout << "Destinatario\n";
    std::cout << "------------\n";
    std::cout << this->de_nombre << "\n";
    std::cout << this->de_direccion << "\n";
    std::cout << this->de_ciudad << ", " << this->de_estado <<", C.P." << this->de_cp << "\n\n";
}

double Envio::calculaCosto()
{
    return costo;
}

