#pragma once
#include <iostream>

class  Figures
{
public:	
	int a, b, c, d;//стороны
	int	A, B, C, D;//углы
	int number;//количество сторон

	std::string NameFigures;
	
	virtual std::string getType();	
};

void print_info(Figures* f);	












