#pragma once
class Tableau
{
private:

	int taille;
	int* t = new int[3];
public:
	Tableau(int taille);
	Tableau(const Tableau& v,int taille);
	Tableau& operator=(const Tableau& v);
	virtual int& operator[](int index);
	~Tableau();
};

