#pragma once
#include <ostream>
using namespace std;
class Broj
{
private:
	double vrednost;
	char* vrsta;

public:
	Broj();
	int poredi(Broj* b1);
	virtual void Print();
	virtual double getVr();
	friend ostream& operator<<(ostream& izlaz, Broj& R);
	virtual ~Broj();

protected:
	virtual double setVr(double f,char*t);
};

