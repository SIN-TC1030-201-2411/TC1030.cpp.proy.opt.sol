#include "fraccion.hpp"
#include "ExcDenZero.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

fraccion::fraccion() : n{0}, d{1}
{}

fraccion::fraccion(int n, int d)
{
    ExcDenZero ez;
    this->n = n < 0? -n : n;
    this->d = d < 0? -d : d;

    if (this->d==0)
    {
        throw ez;
    }
    simplifica();
}

int fraccion::getN()
{
    return n;
}

int fraccion::getD()
{
    return d;
}

void fraccion::setN(int n)
{
    this->n = n;
}

void fraccion::setD(int d)
{
    this->d = d;
}

// Calcula el MCD usando el algoritmo de Euclides ------
int fraccion::mcd()
{
    int u=abs(n);
    int v=abs(d);
    if(v==0){
          return u;
    }
     int r;
     while(v!=0){
          r=u%v;
          u=v;
          v=r;
     }
     return u;
}

// Simplifica la fracción ---------------------
void fraccion::simplifica()
{
    int dividir=mcd();

    n/=dividir;
    d/=dividir;
}

fraccion fraccion::operator+(fraccion& f)
{
    int na, da, nb, db, ns, ds;

    na=n;
    da=d;

    nb=f.getN();
    db=f.getD();

    ns = na * db + nb * da;
    ds = da * db;

    return fraccion(ns,ds);
}

fraccion fraccion::operator-(fraccion& f)
{
    int na, da, nb, db, nr, dr;

    na=n;
    da=d;

    nb=f.getN();
    db=f.getD();

    nr = na * db - nb * da;
    dr = da * db;

    return fraccion(nr,dr);
}

fraccion fraccion::operator*(fraccion& f)
{
    int na, da, nb, db, nm, dm;

    na=n;
    da=d;

    nb=f.getN();
    db=f.getD();

    nm = na * nb;
    dm = da * db;

    return fraccion(nm,dm);
}

fraccion fraccion::operator/(fraccion& f)
{
    int na, da, nb, db, nd, dd;

    na=n;
    da=d;

    nb=f.getN();
    db=f.getD();

    nd = na * db;
    dd = da * nb;

    return fraccion(nd,dd);
}

bool fraccion::operator==(fraccion& f)
{
    return (this->n == f.getN()) && (this->d == f.getD());
}

bool fraccion::operator>(fraccion& f)
{
    return this->getfloat() > f.getfloat();
}

bool fraccion::operator<(fraccion& f)
{
    return this->getfloat() < f.getfloat();
}

void fraccion::print()
{
    std::cout << getN() << "/" << getD() << "\n";
}

void fraccion::print(int n)
{
    std::string ns = std::to_string(getN());
    std::string ds = std::to_string(getD());
    std::string ff{""};

    int nbn{0}, nbd{0};

    nbn = n-ns.length();
    nbd = n-ds.length();

    if (nbn <= 0) {
        ff=std::to_string(getN());
    }
    else
    {
        for (auto i=0; i<nbn; i++) {
            ff+=" ";
        }
        ff+=std::to_string(getN());
    }

    ff+="/";

    if (nbd <= 0) {
        ff+=std::to_string(getD());
    }
    else
    {
        for (auto i=0; i<nbn; i++) {
            ff+=" ";
        }
        ff+=std::to_string(getD());
    }

    std::cout << ff << "\n";
}

float fraccion::getfloat()
{
    return (float) n/d;
}

void fraccion::fprint()
{
    std::cout << getfloat() << "\n";
}