#include <vector>

class Solution
{
public:
	int majorityElement(std::vector<int>& nums)
	{
		std::map<int, size_t> m{};
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
};
