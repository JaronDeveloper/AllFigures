#include "FiguresH.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "RightRriangle.h"
#include "Square.h"

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

	Figures* rightRriangle = new RightRriangle(10,20,30,50,60,90);
	rightRriangle->number = 3;	
	print_info(rightRriangle);
	delete rightRriangle;

	Figures* isoscelesTriangle = new IsoscelesTriangle(10,20,10,50,60,50);
	isoscelesTriangle->number = 3;	
	print_info(isoscelesTriangle);
	delete isoscelesTriangle;

	Figures* equilateralTriangle = new EquilateralTriangle(30,30,30,60,60,60);
	equilateralTriangle->number = 3;
	print_info(equilateralTriangle);
	delete equilateralTriangle;

	Figures* rectangle = new Rectangle(10, 20, 10, 20, 90, 90, 90, 90);
	rectangle->number = 4;
	print_info(rectangle);
	delete rectangle;

	Figures* square = new Square(20, 20, 20, 20, 90, 90, 90, 90);
	square->number = 4;
	print_info(square);
	delete square;	

	Figures* parallelogram = new Parallelogram(20,30,20,30,30,40,30,40);
	parallelogram->number = 4;
	print_info(parallelogram);
	delete parallelogram;

	Figures* rhombus = new Rhombus(30, 30, 30, 30, 30, 40, 30, 40);
	rhombus->number = 4;
	print_info(rhombus);
	delete rhombus;

	return 0;
}