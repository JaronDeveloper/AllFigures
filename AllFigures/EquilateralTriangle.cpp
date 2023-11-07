#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) {
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

std::string EquilateralTriangle::getType() {
	return NameFigures;
}