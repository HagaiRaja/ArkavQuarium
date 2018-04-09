#include <iostream>
#include "MakananIkan.h"
#include "../Objek.h"
#include "../../Ikan/Guppy/Guppy.h"

/* Konstruktor untuk menentukan posisi makanan ikan ketika pertama kali dibangkitkan*/
MakananIkan::MakananIkan(int _x, int _y){
	x = _x;
	y = _y;
}
/* dtor untuk mengurangi Number of Food */
MakananIkan::~MakananIkan(){

}

/* Getter dan Setter untuk Jumlah Makanan Ikan yang ada */
static int MakananIkan::getNumberOfFood() const{
	return numberOfFood;
}
static void MakananIkan::setNumberOfFood(int n){
	numberOfFood = n;
}

