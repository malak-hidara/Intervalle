#pragma once
class Tableau
{

protected:
	float *data;
	int taille;

public:

	Tableau(int);
	Tableau(const Tableau&);
	Tableau operator=(const Tableau&);
	float & operator[](int);
	~Tableau();
};

