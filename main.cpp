#include<iostream>
#include "Broj.h"
#include<cstdlib>
#include "RacionalanBroj.h"
#include "KompleksanBroj.h"
#include <fstream>
using namespace std;

void main(){

	Broj* broj[2018];
	srand((unsigned)time(NULL));//ne sme da bude u petlji
	for (int i = 0;i < 1009;i++)
	{
		int x, y;
		x = 55 + (rand() % 2500);
		y = 1 + (rand() % 700);
		broj[i] = new RacionalanBroj(x, y);
	}

	for (int i = 1009;i < 2018;i++)
	{
		int x, y;
		x = 25 + (rand() % 5000);
		y = 1 + (rand() % 3547);
		broj[i] = new KompleksanBroj(x, y);
	}

	int i, j,x=0;
	Broj* pom;

	for (i = 0;i < 2018;i++)
	{
		for (j =0; j < 2017;j++)
		{
			x = broj[j]->poredi(broj[j + 1]);
			if (x == -1)
			{
				pom = broj[j];
				broj[j] = broj[j + 1];
				broj[j + 1] = pom;
			}
		}
	}
	ofstream izvezi("Izlaz.txt");
	for (int i = 0;i < 2018;i++)
	{
		pom = broj[i];
		izvezi << *pom;
	}
}