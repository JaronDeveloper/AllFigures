#include "FiguresH.h"

std::string Figures::getType() {
	return NameFigures;	
}

void print_info(Figures* f) {
	std::cout << f->getType() << std::endl;

	if (f->number == 4) {
	std::cout << "Стороны: " << "a=" << f->a << " " << "b=" << f->b << " " << "c=" << f->c << " " << "d=" << f->d << std::endl;
	std::cout << "Углы: " << "A=" << f->A << " " << "B=" << f->B << " " << "C=" << f->C << " " << "D=" << f->D << std::endl;
	}
	if (f->number == 3) {
		std::cout << "Стороны: " << "a=" << f->a << " " << "b=" << f->b << " " << "c=" << f->c << std::endl;
		std::cout << "Углы: " << "A=" << f->A << " " << "B=" << f->B << " " << "C=" << f->C << std::endl;
	}
	std::cout << std::endl;
}
/*
RightRriangle::RightRriangle(int a, int b, int c, int A, int B, int C) {
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

std::string RightRriangle::getType() {
	return NameFigures;
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C){
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
}

std::string IsoscelesTriangle::getType(){
		return NameFigures;
}
	
EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C){
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
}

std::string EquilateralTriangle::getType(){
		return NameFigures;
}

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D){
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
}

std::string Rectangle::getType(){
		return NameFigures;
}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D){
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
}

std::string Square::getType() {
	   return NameFigures;
}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D){
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
}

std::string Parallelogram::getType() {
		return NameFigures;
}

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D){
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		this->C = D;
}

std::string Rhombus::getType() {
	return NameFigures;
}

*/