#include "Objek.h"
#include "oop.hpp"
#include <bits/stdc++.h>

using namespace std;

const double speedObjek = 40;

Objek :: Objek(int _x,int _y) : Akuarium(_x,_y){
}

void Objek :: Move() {
	double prevtimne = time_since_start();
	double cyObjek = SCREEN_HEIGHT2;
	while(cyObjek > 0){
		double now = time_since_start();
        double sec_since_last = now - prevtime;
        prevtime = now
		cy -= speedObjek * sec_since_last;
	}

}