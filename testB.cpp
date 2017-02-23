
#include <iostream>

#include "B.hpp"


int main() {
	B instanceB;

	std::cout << instanceB.sumTwoValuesOnGPU(1,2) << std::endl;
	                       
	return 0;
}