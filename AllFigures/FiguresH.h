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

/*
class RightRriangle : public Triangle {
public:
	std::string NameFigures="Прямоугольный треугольник:";

	//int a = 10, b = 20, c = 30;
	//int A = 50, B = 60, C = 90;

	RightRriangle() {}
	RightRriangle(int a, int b, int c, int A, int B, int C);

	std::string getType() override;
};

class IsoscelesTriangle : public Triangle {
public:
	//int	a = 10, b = 20, c = 10;
	//int	A = 50, B = 60, C = 50;

	IsoscelesTriangle() {}
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C);

	std::string NameFigures="Равнобедренный треугольник:";

	std::string getType() override;
};

class EquilateralTriangle : public Triangle {
public:
	//int	a = 30, b = 30, c = 30;
	//int	A = 60, B = 60, C = 60;

	EquilateralTriangle() {}
	EquilateralTriangle(int a, int b, int c, int A, int B, int C);

	std::string NameFigures="Равносторонний треугольник:";

	std::string getType() override;
};

class Rectangle : public Triangle {
public:
	//int	a = 10, b = 20, c = 10, d = 20;
	//int	A = 90, B = 90, C = 90, D = 90;

	Rectangle() {}
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string NameFigures="Прямоугольник:";

	std::string getType() override;
};

class Square : public Triangle {
public:
	//int	a = 20, b = 20, c = 20, d = 20;
	//int	A = 90, B = 90, C = 90, D = 90;

	std::string NameFigures="Квадрат:";

	Square() {}
	Square(int a, int b, int c, int d, int A, int B, int C, int D);	

	std::string getType() override;
};

class Parallelogram : public Triangle {
public:
	//int	a = 20, b = 30, c = 20, d = 30;
	//int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures="Параллелограмм:";

	Parallelogram() {}
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string getType() override;
};

class Rhombus : public Triangle {
public:
	//int	a = 30, b = 30, c = 30, d = 30;
	//int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures="Ромб:";

	Rhombus() {}
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string getType() override;
};
*/