#include <string>
#include <map>
#include <vector>
#include <algorithm>


class Solution
{
public:
	std::string frequencySort(std::string s)
	{
		std::map<char, size_t> cf;
		for (const char& c : s)
		{
			cf[c]++;
		}

		std::map<size_t, std::vector<char> > icf;
		for (const auto& [c, f] : cf)
		{
			icf[f].push_back(c);
		}

		std::string result{ "" };
		for (const auto& [f, vc] : icf)
		{
			for (const auto& c : vc)
			{
				result.append(f, c);
			}
		}
		std::reverse(result.begin(), result.end());
		return result;
	}
};
