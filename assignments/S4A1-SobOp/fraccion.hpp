#pragma once
#include <iostream>

class fraccion {
private:
    int n,d;
    void simplifica();
    int mcd();
public:
    fraccion();
    fraccion(int, int);

    int getN();
    int getD();

    float getfloat();

    void setN(int);
    void setD(int);

    fraccion operator+(fraccion&);
    fraccion operator-(fraccion&);
    fraccion operator*(fraccion&);
    fraccion operator/(fraccion&);

    bool operator==(fraccion&);
    bool operator>(fraccion&);
    bool operator<(fraccion&);
    
    friend std::ostream& operator<<(std::ostream&, fraccion&);

    void print(int);
    void fprint();
};