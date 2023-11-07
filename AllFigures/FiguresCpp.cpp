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



	










