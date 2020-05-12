#include <iostream>
#include "SingleElementsInASortedArray.h"

int main()
{
	std::cout << "Hello World\n";
	
	Solution s;
	std::vector<int> input{ 0, 0, 1, 1, 2, 2, 3, 4, 4 };
	int solution = s.singleNonDuplicate(input);
	std::cout << solution << std::endl;
}
