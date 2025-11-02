#include "TableauBorne.h"
#include<iostream>
using namespace std;
TableauBorne::TableauBorne(int a , float s, float e):Tableau(a)
{
	this->start = s;
	this->end = e;
}

const float& TableauBorne::operator[](int index) const
{
	if (index < 0 || index >= taille) {
		cout << "hors limite" << endl;
		exit;
	}
	return data[index];
}

float TableauBorne::operator()(int index, float valeur)
{
	if (index < 0 || index >= taille) {
		cout << "Index hors limites !" << endl;
		exit;
	}
	if (valeur < start || valeur > end) {
		cout << "Valeur hors bornes [" << start << ", " << end << "] !" << endl;
		exit;
	}
	data[index] = valeur;
	return data[index];
	
}
