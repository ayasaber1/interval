#include "Tableau.h"
#include <iostream>
#include <assert.h>
using namespace std;

Tableau::Tableau(int taille)
{
	this->taille = taille;
	this->t = new int[taille];
	for (int i = 0; i < taille; i++)
	{

		this->t[i] = 0;
		cout << "t[" << i << "] = " << t[i] << endl;

	}
}

Tableau::Tableau(const Tableau& v, int taille)
{
	this->taille = taille;
	this->t = new int[taille];
	assert((taille >= 0 && taille == v.taille));
	for (int i = 0; i < taille; i++)
	{

		this->t[i] =v.t[i];
		cout << "t[" << i << "] = " << t[i] << endl;

	}
}

Tableau& Tableau::operator=(const Tableau& v)
{
	if (this != &v)
	{
		delete[] this->t;
		this->t = 0;
		this->t = new int[taille];
		for (int i = 0; i < this->taille; i++)
		{
			this->t[i] = v.t[i];
		}
	}


	return *this; 
}

int& Tableau::operator[](int index)
{
	assert((index >= 0 && index < taille));

	return this->t[index];
	
}

Tableau::~Tableau()
{

	delete[] this->t;
	this->t = 0;
	std::cout << " decruteur " << "\n";
}
