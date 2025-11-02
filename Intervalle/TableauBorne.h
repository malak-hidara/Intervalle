#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{

private:
	float start;
	float end;

public:
	TableauBorne(int, float, float);
	const float& operator[](int index) const;
	float operator()(int, float);


};

