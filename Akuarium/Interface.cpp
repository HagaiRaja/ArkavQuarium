#include "Interface.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

Interface::Interface(){
	srand(time(0));
	int randomval = rand() % 2;
	if (randomval == 0){
		direction = false;
	} else {
		direction = true;
	}
}

// setter and getter
void Interface::setDirection(bool b){
	srand(time(0));
	int randomval = rand() % 2;
	if (randomval == 0){
		b = false;
	} else {
		b = true;
	}
}

bool Interface::getDirection() const{
	return direction;
}

