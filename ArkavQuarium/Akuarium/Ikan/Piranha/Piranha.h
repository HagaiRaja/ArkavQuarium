//Dibuat Hagai

#ifndef PIRANHA_H
#define PIRANHA_H

#include "../Ikan.h"
#include "../Guppy/Guppy.h"

/* Kelas turunan dari ikan untuk menggenerate piranha */
class Piranha : public Ikan
{
public:
	// Harga Piranha
	const static int HARGA_PIRANHA;

	/* Konstruktor untuk menentukan posisi piranha ketika pertama kali dibangkitkan*/
	Piranha(int _x, int _y);
	
	/* Method untuk ikan memakan makanan ikan */
	void Eat();
	
	/* Method untuk menjatuhkan koin */
	void DropCoin();

private :
	// Atribut konstanta khusus Piranha
	static const int CoinOut_Time; 
	static const int FreeHungry_Time; 
	static const int GetFood_Time;
};

#endif
