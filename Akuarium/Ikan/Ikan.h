//Dibuat Hagai
#ifndef IKAN_H
#define IKAN_H

#include "../Akuarium.h"
#include "../Interface.h"

/* Kelas turunan dari akuarium untuk menggenerate ikan */
class Ikan : public Akuarium, Interface
{
public:
	// Definisi Level Ikan
	enum FishLevel {
		BabyFish, TeenFish, AdultFish
	};

	/* Konstruktor untuk menentukan posisi ikan ketika pertama kali dibangkitkan*/
	Ikan(int _x, int _y);
	
	/* Destruktor untuk memusnahkan ikan */
	~Ikan();
	/* Method untuk menentukan apakah ikan lapar atau tidak */
	bool GetHunger() const;
	
	/* Method untuk mengeset apakah ikan lapar atau tidak */
	void SetHunger(bool);

	/* Method untuk pergerakan ikan */
	void Move();

	// setter and getter
	FishLevel getLevel() const;
	void setLevel(FishLevel);
	
	/* Method yang tidak melakukan apapun */
	virtual void Eat() = 0;
	
	/* Method yang tidak melakukan apapun */
	virtual void DropCoin() = 0; 

private:
	// BabyFish(lv1), TeenFish(lv2) and AdultFish(lv3)
	FishLevel level;
	// false means not hungry, vice versa 
	bool hunger;		
};

#endif
