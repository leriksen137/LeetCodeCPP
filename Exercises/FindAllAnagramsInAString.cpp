#include "FindAllAnagramsInAString.h"

namespace FindAllAnagramsInAString
{
	std::vector<int> Solution::findAnagrams(std::string s, std::string p)
	{
		std::vector<int> res;
		if (s.size() < p.size()) return res;

		std::vector<int> vp(26, 0);
		for (const auto& c : p) vp[c - 'a']++;

		std::vector<int> vtmp(26, 0);
		const std::string tmp = s.substr(0, p.size());
		for (const auto& c : tmp) vtmp[c - 'a']++;

		if (vtmp == vp)	res.push_back(0);

		for (size_t i = 1; i <= s.size() - p.size(); i++)
		{
			const auto c1 = s[i - 1];
			const auto c2 = s[i + p.size() - 1];
			vtmp[c1 - 'a']--;
			vtmp[c2 - 'a']++;
			if (vtmp == vp)	res.push_back(i);
		}
		return res;
	}
}
