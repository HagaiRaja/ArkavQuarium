#include "Ikan.h"

// Implementasi file Ikan.h

/* Konstruktor untuk menentukan posisi ikan ketika pertama kali dibangkitkan*/
Ikan::Ikan(int _x, int _y, double _lastHungry, double _lastCoinDrop) : Akuarium (_x, _y) {
	level = BabyFish;
	hunger = false;
	lastHungry = _lastHungry;
	lastCoinDrop = _lastCoinDrop; 
}

/* Destruktor untuk memusnahkan ikan */
Ikan::~Ikan() {

}

/* Method untuk menentukan apakah ikan lapar atau tidak */
bool Ikan::getHunger() const {

}

/* Method untuk mengeset apakah ikan lapar atau tidak */
void Ikan::setHunger(bool) {

}

/* Method untuk pergerakan ikan */
void Ikan::Move() {

}

// setter and getter
FishLevel Ikan::getLevel() const {

}

void Ikan::setLevel(FishLevel) {

}

/* Method yang tidak melakukan apapun */
virtual void Ikan::Eat() {

}

/* Method yang tidak melakukan apapun */
virtual void Ikan::DropCoin() {

}