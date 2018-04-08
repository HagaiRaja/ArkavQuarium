//Dibuat Hagai

#ifndef GUPPY_H
#define GUPPY_H

#include "../Ikan.h"
#include "../Piranha/Piranha.h"
#include "../../Objek/MakananIkan/MakananIkan.h"


/* Kelas turunan dari ikan untuk menggenerate piranha */
class Guppy : public Ikan
{
public:
	// agar kelas piranha dapat melihat populationNumber Guppy dsb
	friend class Piranha;

	// Harga Guppy
	const static int HARGA_GUPPY;

	// ctor
	/* Konstruktor untuk menentukan posisi guppy ketika pertama kali dibangkitkan*/
	Guppy(int _x, int _y);
	/* dtor untuk mengupdate jumlah Guppy yang hidup */
	~Guppy();
	
	/* setter dan getter */
	static int getPopulationNumber() const;
	static void setPopulationNumber(int);

	// behavior
	void Eat();
	void DropCoin();

private:
	static int populationNumber;

	// Atribut konstanta khusus Guppy
	static const int CoinOut_Time; 
	static const int FreeHungry_Time; 
	static const int GetFood_Time; 
};

#endif
