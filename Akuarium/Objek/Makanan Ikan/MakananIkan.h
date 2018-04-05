#ifndef MAKANANIKAN_H
#define MAKANANIKAN_H

#include "../Objek.h"
#include "../../Ikan/Guppy/Guppy.h"

/* Kelas turunan dari objek untuk menggenerate makanan ikan */
class MakananIkan : public Objek {
public :
	friend class Guppy;
	/* Konstruktor untuk menentukan posisi makanan ikan ketika pertama kali dibangkitkan*/
	MakananIkan(int _x, int _y);
	/* dtor untuk mengurangi Number of Food */
	~MakananIkan();

	/* Getter dan Setter untuk Jumlah Makanan Ikan yang ada */
	static int getNumberOfFood() const;
	static void setNumberOfFood(int);

private :
	static int numberOfFood;
};
#endif
