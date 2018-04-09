#include "Koin.h"
#include "oop.hpp"
#include <bits/stdc++.h>

Koin :: Koin(int _value, int _x, int _y) : Akuarium(_x,_y){ 
	this -> value = _value;
}

Koin :: ~Koin(){

}

int Koin :: getValue() const{
	return this -> value;
} 

static int Koin :: getNumberOfCoin() const{
	return this -> numberOfCoin;
}
static void Koin :: setNumberOfCoin(int A){
	this -> numberOfCoin = A;
}