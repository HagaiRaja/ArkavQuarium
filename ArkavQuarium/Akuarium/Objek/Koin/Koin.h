//Dibuat Eka
#ifndef KOIN_H
#define KOIN_H

#include "../Objek.h"
#include "../../Siput/Siput.h"

/* Kelas turunan dari objek untuk menggenerate koin */
class Koin : class Objek {
public :
	friend class Siput;

	// Definisi Jenis Koin
	enum CoinType { Bronze, Silver, Gold };

	/* Konstruktor untuk menentukan posisi koin ketika pertama kali dibangkitkan*/
	Koin(int _value, int _x, int _y);
	/* dtor untuk mengurangi nilai Number of Coin */
	~Koin();
	
	/* Method untuk mendapat nilai koin */
	int getValue() const;

	/* Getter dan Setter untuk jumlah koin */
	static int getNumberOfCoin() const;
	static void setNumberOfCoin(int);
	
private :
	const CoinType value; 		// Bronze, Silver or Gold
	static int numberOfCoin;
};
