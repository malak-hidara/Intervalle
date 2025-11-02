#include "Tableau.h"
#include<iostream>
using namespace std;
Tableau::Tableau(int a)
{
	this->taille = a;
	this->data = new float[a];
	for (int i = 0; i < a; i++){
		this->data[i] = 0;
	}
}

Tableau::Tableau(const Tableau& t):taille(t.taille)
{
	this->data = new float[this->taille];
	for (int i = 0; i < this->taille; i++){
		this->data[i] = t.data[i];
	}
}

Tableau Tableau::operator=(const Tableau& t)
{
	if (this == &t) return* this;
	if (this->taille != t.taille) {
		delete[]this->data;
		this->taille = t.taille;
		this->data = new float[this->taille];
	}
	for (int i = 0; i < this->taille; i++){
		this->data[i] = t.data[i];
	}
	return *this;
}

float& Tableau::operator[](int index)
{
	if (index<0 || index >= this ->taille) {
		cout << "impossible l'indice: " << index << "est invalide" << endl;
		exit(-1);
	}
	return this->data[index];
}

Tableau::~Tableau()
{
	delete[]this->data;
}
