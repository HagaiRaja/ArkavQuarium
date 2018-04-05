#ifndef INTERFACE_H
#define INTERFACE_H

/* Kelas ini mendefinisikan bagaimana sebuah objek yang dapat terlihat
	berbeda saat runtime seperti ikan-ikan dan siput saat bergerak
*/

class Interface
{
public:
	Interface();

	// setter and getter
	void setDirection(bool);
	bool getDirection() const;

private:
	/* Mendefinisikan kearah mana sebuah objek menghadap.
		True berarti ke Kanan dan False berarti ke Kiri */
	bool direction;		
};
#endif