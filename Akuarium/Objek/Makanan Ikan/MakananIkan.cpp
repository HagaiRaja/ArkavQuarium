#include "MakananIkan.h"
#include "oop.hpp"
#include <bits/stdc++.h>

using namespace std;

MakananIkan :: MakananIkan(int _x, int _y) : Akuarium(_x,_y){
}

MakananIkan :: ~MakananIkan(){
}

static int MakananIkan :: getNumberOfFood() const {
	return this -> numberOfFood;
}
static void setNumberOfFood(int A) {
	this -> numberOfFood = A;
}
