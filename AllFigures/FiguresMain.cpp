#include "FiguresH.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Figures* triangle = new Triangle();
	triangle->number = 3;
	triangle->a=10;
	triangle->c = 20;
	triangle->b = 30;
	triangle->A = 50;
	triangle->C = 60;
	triangle->B = 70;
	print_info(triangle);
	delete triangle;

	Figures* quadrilateral = new Quadrilateral();
	quadrilateral->number = 4;
	quadrilateral->a = 10;
	quadrilateral->c = 20;
	quadrilateral->b = 30;
	quadrilateral->d = 40;
	quadrilateral->A = 50;
	quadrilateral->C = 60;
	quadrilateral->B = 70;
	quadrilateral->D = 80;
	print_info(quadrilateral);
	delete quadrilateral;

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
	
	return 0;
}