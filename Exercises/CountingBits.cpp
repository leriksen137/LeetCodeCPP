#include <vector>


class Solution
{
public:
	std::vector<int> countBits(int num)
	{
		std::vector<int> result{};
		for (int i = 0; i <= num; i++)
		{
			result.push_back(__builtin_popcount(i));
		}
		return result;
	}
};
