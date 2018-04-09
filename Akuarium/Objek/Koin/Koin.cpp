#include "../Objek.h"
#include "../../Siput/Siput.h"
#include "Koin.h"
#include <iostream>

Koin(int _value, int _x, int _y){

}
/* dtor untuk mengurangi nilai Number of Coin */
~Koin();

/* Method untuk mendapat nilai koin */
int getValue() const;

/* Getter dan Setter untuk jumlah koin */
static int getNumberOfCoin() const{
	return numberOfCoin;
}
static void setNumberOfCoin(int n){
	
}
