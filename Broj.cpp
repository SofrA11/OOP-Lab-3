#include "Broj.h"
#include <iostream>
using namespace std;

Broj::Broj()
{
    vrednost = 0;
    vrsta = nullptr;
}

int Broj::poredi(Broj* b1)
{
    int x;
    vrednost > (b1->vrednost) ? x = 1 : x = -1;
    return x;
}

void Broj::Print()
{
    cout << vrednost<<' ';
    for (int i = 0;i < 15;i++)
    {
        cout << vrsta[i]<<' ';
    }
    cout << endl;
}

double Broj::getVr()
{
    return vrednost;
}

double Broj::setVr(double f,char*t)
{
    vrednost = f;
    vrsta = t;
    return 0;
}

ostream& operator<<(ostream& izlaz, Broj& B)
{
    
    izlaz << B.vrednost << " ";
    izlaz << B.vrsta;
    izlaz << endl;
    return izlaz;
}

Broj::~Broj()
{

}

