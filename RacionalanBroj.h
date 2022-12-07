#pragma once
#include "Broj.h"
using namespace std;

class RacionalanBroj :
    public Broj
{
private:
    int a;
    int b;
    char* vrsta = { new char[16]{ 'r','a','c','i','o','n','a','l','a','n',' ','b','r','o','j','\0' } };
public:
    RacionalanBroj();
    RacionalanBroj(int x, int y);
    virtual void Print();
    virtual double getVr(double x,double y);
    ~RacionalanBroj();
    double getA();
    double getB();
};

