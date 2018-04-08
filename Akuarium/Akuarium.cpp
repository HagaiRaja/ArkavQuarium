#include "Akuarium.h"
#include <iostream>

// ctor
Akuarium::Akuarium(int _x, int _y){
	x = _x;
	y = _y;
}
/*
	Untuk empat sekawan lainnya dianggap tidak perlu
	karena class ini hanya memiliki atribut integer
	dan dari spek game dapat dilihat hal ini
	tidak dibutuhkan
*/

/* Method untuk mengeset posisi dari objek dan ikan pada akuarium */
void setPos(int _x, int _y){
	x = _x;
	y = _y;
}

/* Method untuk mengeset posisi dari objek dan ikan pada sumbu x */
void setPosX(int _x){
	x = _x;
}

/* Method untuk mengeset posisi dari objek dan ikan pada sumbu y */
void setPosY(int _y){
	y = _y;
}

/* Method untuk menentukan posisi dari objek dan ikan pada sumbu x */
int getPosX() const{
	return x;
}

/* Method untuk menentukan posisi dari objek dan ikan pada sumbu y */
int getPosY() const{
	return y;
}

/* Method yang tidak melakukan apapun, selanjutnya akan didefinisikan di kelas anak */
virtual void Move() = 0;
