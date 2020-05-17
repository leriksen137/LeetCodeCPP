#include <string>

class Solution
{
public:
	std::string removeKdigits(std::string num, int k)
	{
		if (k == num.length())
		{
			return "0";
		}
		size_t i{ 0 };
		while ((i < num.length() - 1) && k > 0)
		{
			if (num[i] <= num[i + 1])
			{
				i++;
			}
			else
			{
				k--;
				num.erase(num.begin() + i);
				if (i > 0)
				{
					i--;
				}
			}
			while (num[0] == '0')
			{
				num.erase(num.begin());
			}
		}
		if (k > 0)
		{
			num.erase(num.begin() + (num.length() - k), num.end());
		}
		if (num == "")
		{
			return "0";
		}
		return num;
	}
};
