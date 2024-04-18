#pragma once

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
    
    void print();
    void print(int);
    void fprint();
};