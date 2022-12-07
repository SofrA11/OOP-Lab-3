#pragma once
#include "Broj.h"
class KompleksanBroj :
    public Broj
{
private:
    int Re;
    int Im;
    char* vrsta = { new char[16]{'k','o','m','p','l','e','k','s','a','n',' ','b','r','o','j','\0'} };
public:
   KompleksanBroj();
   KompleksanBroj(int x, int y);
   double moduo(double R, double I);
   virtual void Print();
    virtual double getVr(double x, double y);
    ~KompleksanBroj();
    double getR();
    double getI();
};

