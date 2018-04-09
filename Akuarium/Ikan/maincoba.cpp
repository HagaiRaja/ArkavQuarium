#include "A.hpp"
#include <iostream>
using namespace std;

int main()
{
	/* code */
	A s;
	A b;

	A *p = new A();
	cout << A::get() << endl;
	delete p; 
	cout << A::get() << endl;
	return 0;
}