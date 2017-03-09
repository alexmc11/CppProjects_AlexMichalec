#include "DynArray.hh"
#include <iostream>

void main() {
	DynArray arr1;
	DynArray arr2(8, 5);
	arr1.reserve(9);
	arr1.push(10);
	operator==(arr1, arr2);
}