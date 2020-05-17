#include "MajorityElement.h"
#include <vector>

int main() {
	MajorityElement::Solution s;
	std::vector<int> nums{ 0, 1, 2, 2, 2 };
	s.majorityElement(nums);
}
