#include "MajorityElement.h"
#include <map>

namespace MajorityElement
{
	int Solution::majorityElement(std::vector<int>& nums)
	{
		std::map<int, int> m{};
		for (const int& n : nums) {
			m[n]++;
		}
		for (const auto& p : m) {
			if (p.second > nums.size() / 2) {
				return p.first;
			}
		}
		return -1;
	}
}
