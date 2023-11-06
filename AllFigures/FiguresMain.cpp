#include "FiguresH.h"
#include "Triangle.h"
#include "Quadrilateral.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Figures* triangle = new Triangle(10,20,30,50,60,70);
	triangle->number = 3;	
	print_info(triangle);
	delete triangle;

	Figures* quadrilateral = new Quadrilateral(10,20,30,40,50,60,70,80);
	quadrilateral->number = 4;	
	print_info(quadrilateral);
	delete quadrilateral;
	/*
	Figures* rightRriangle = new RightRriangle();
	rightRriangle->number = 3;
	rightRriangle->a = 10;
	rightRriangle->c = 20;
	rightRriangle->b = 30;
	rightRriangle->A = 50;
	rightRriangle->C = 60;
	rightRriangle->B = 90;
	print_info(rightRriangle);
	delete rightRriangle;

	Figures* isoscelesTriangle = new IsoscelesTriangle();
	isoscelesTriangle->number = 3;
	isoscelesTriangle->a = 30;
	isoscelesTriangle->c = 30;
	isoscelesTriangle->b = 30;
	isoscelesTriangle->A = 60;
	isoscelesTriangle->C = 60;
	isoscelesTriangle->B = 60;
	print_info(isoscelesTriangle);
	delete isoscelesTriangle;

	Figures* equilateralTriangle = new EquilateralTriangle();
	equilateralTriangle->number = 4;
	equilateralTriangle->a = 10;
	equilateralTriangle->c = 20;
	equilateralTriangle->b = 10;
	equilateralTriangle->d = 20;
	equilateralTriangle->A = 90;
	equilateralTriangle->C = 90;
	equilateralTriangle->B = 90;
	equilateralTriangle->D = 90;
	print_info(equilateralTriangle);
	delete equilateralTriangle;
	*/
	return 0;
}