#include "KompleksanBroj.h"
#include <iostream>
using namespace std;

KompleksanBroj::KompleksanBroj()
{
	Re = 0;
	Im = 0;
	char* vrsta = { new char[16]{'k','o','m','p','l','e','k','s','a','n',' ','b','r','o','j','\0'} };
}

KompleksanBroj::KompleksanBroj(int x, int y) 
{
	Re = x;
	Im = y;
	Broj::setVr(getVr(x, y), vrsta);
}

double KompleksanBroj::moduo(double R, double I)
{
	double mod;
	mod = sqrt(R * R + I * I);
	return mod;
}

double KompleksanBroj::getVr(double x, double y)
{
	return moduo(x, y);
}

void KompleksanBroj::Print()
{
		cout <<"|" << Re << "+ j" << Im << "|" << "=" << getVr(Re,Im) << " ";
		for (int i = 0;i < 15;i++)
		{
			cout << vrsta[i];
		}
		cout << endl;
}

KompleksanBroj::~KompleksanBroj()
{
	if (KompleksanBroj::vrsta != nullptr)
	{
		delete[] KompleksanBroj::vrsta;
		KompleksanBroj::vrsta = nullptr;
	}
}

double KompleksanBroj::getR()
{
	return Re;
}

double KompleksanBroj::getI()
{
	return Im;
}

