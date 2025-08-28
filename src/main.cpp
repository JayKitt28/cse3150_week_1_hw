#include <iostream>
#include "advancedMathUtils.h"

int main()
{
	std::cout << "a + b = " << MathUtils::add(3, 4) << std::endl;
	std::cout << "a * b = " << MathUtils::multiply(3, 4) << std::endl;
	std::cout << "square(a) = " << AdvancedMath::square(3) << std::endl;
}

