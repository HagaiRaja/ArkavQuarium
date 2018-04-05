#ifndef OBJEK_H
#define OBJEK_H

#include "../Akuarium.h"

/* Kelas turunan dari akuarium untuk menggenerate Objek yang kemudian menurunkan kelas MakananIkan dan Koin */
class Objek : public Akuarium {
public :
	/* Konstruktor untuk menentukan posisi Objek ketika pertama kali dibangkitkan*/
	Objek(int _x, int _y);
	
	/* Method untuk pergerakan objek */
	void Move();
	
};
