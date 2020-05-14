#include <iostream>
#include "SingleElementInASortedArray.h"
#include "RemoveKDigits.h"

int main()
{
	RemoveKDigits::Solution s;
	std::string num = "1432219";
	int k = 3;

	std::cout << s.removeKdigits(num, k) << std::endl;
}
