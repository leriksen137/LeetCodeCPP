#include <cmath>


class Solution
{
public:
	int findComplement(int num)
	{
		int sum{ 0 };
		int i{ 0 };
		while (num)
		{
			if (!(num & 1))
			{
				sum += static_cast<int>(std::pow(2, i));
			}
			num >>= 1;
			i++;
		}
		return sum;
	}
};
