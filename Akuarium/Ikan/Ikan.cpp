#include "Ikan.h"

// Implementasi file Ikan.h

int Ikan::fishPopulation = 0;

/* Konstruktor untuk menentukan posisi ikan ketika pertama kali dibangkitkan*/
Ikan::Ikan(int _x, int _y, double nowTime) : Akuarium (_x, _y) {
	level = BabyFish;
	hunger = false;
	lastHungry = nowTime;
	lastCoinDrop = nowTime;
	fishPopulation++; 
}

/* Destruktor untuk memusnahkan ikan */
Ikan::~Ikan() {
	fishPopulation--;
}

/* Method untuk menentukan apakah ikan lapar atau tidak */
bool Ikan::getHunger() const {
	return hunger;
}

/* Method untuk mengeset apakah ikan lapar atau tidak */
void Ikan::setHunger(bool _hunger) {
	hunger = _hunger;
}

/* Method untuk pergerakan ikan */
void Ikan::Move() {

}

// setter and getter
FishLevel Ikan::getLevel() const {
	return level;
}

void Ikan::setLevel(FishLevel _level) {
	level = _level;
}

double Ikan::getLastHungry() const {
	return lastHungry;
}

void Ikan::setLastHungry(double _lastHungry) {
	lastHungry = _lastHungry;
}

double Ikan::getStartHungry() const{
	return startHungry;
}

void Ikan::setStartHungry(double _startHungry){
	startHungry = _startHungry;
}

double Ikan::getLastCoinDrop() const{
	return lastCoinDrop;
}

void Ikan::setLastCoinDrop(double _lastCoinDrop){
	lastCoinDrop = _lastCoinDrop;
}

int Ikan::getFishPopulation() {
	return fishPopulation;
}
