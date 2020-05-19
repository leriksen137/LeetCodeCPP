#include <string>
#include <unordered_map>


class Solution
{
public:
	int firstUniqChar(std::string s)
	{
		int index{ -1 };
		std::unordered_map<char, int> freq;
		for (const auto& i : s)
		{
			freq[i]++;
		}
		for (size_t i = 0; i < s.length(); i++)
		{
			if (freq[s[i]] == 1)
			{
				index = i;
				break;
			}
		}
		return index;
	}
};
