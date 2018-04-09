#include "A.hpp"

int A::woi = 0;

A::A () {
	woi++;
}
A::~A () {
	woi--;
}
int A::get() {
	return woi;
}