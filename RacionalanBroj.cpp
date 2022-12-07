#include "RacionalanBroj.h"
#include <iostream>
using namespace std;
RacionalanBroj::RacionalanBroj()
{
	a = 0;
	b = 0;
	vrsta =  new char[16]{ 'r','a','c','i','o','n','a','l','a','n',' ','b','r','o','j','\0' };
}
RacionalanBroj::RacionalanBroj(int x, int y) {
	a = x;
	b = y;
	Broj::setVr(getVr(a, b), vrsta);
}

void RacionalanBroj::Print()
{
	cout << a <<"/"<<b<<"="<<getVr(a,b)<<" ";
	for (int i = 0;i < 15;i++)
	{
		cout << vrsta[i];
	}
	cout << endl;
}

double  RacionalanBroj::getVr(double x,double y)
{
	return x/y;
}

RacionalanBroj::~RacionalanBroj()
{
	if (RacionalanBroj::vrsta != nullptr)
	{
		delete[] RacionalanBroj::vrsta;
		RacionalanBroj::vrsta = nullptr;
	}
}

double RacionalanBroj::getA()
{
	return a;
}

double RacionalanBroj::getB()
{
	return b;
}
