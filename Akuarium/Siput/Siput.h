//Dibuat Tanor
#ifndef SIPUT_H
#define SIPUT_H

#include "../Akuarium.h"
#include "../Interface.h"
#include "../Objek/Koin/Koin.h"

/* Kelas turunan dari akuarium untuk menggenerate siput */
class Siput : public Akuarium, Interface {

public :
	/* Konstruktor untuk menentukan posisi Siput ketika pertama kali dibangkitkan*/
	Siput(int _x, int _y);
	
	/* Method untuk pergerakan siput */
	void Move();
	
	/* Method untuk pengambilan koin oleh siput */
	void ambilKoin();

};
