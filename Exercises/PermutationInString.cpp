#include <string>
#include <vector>

class Solution
{
public:
	bool checkInclusion(std::string s1, std::string s2)
	{
		if (s1.size() > s2.size()) return false;

		std::vector<int> vp(26, 0);
		for (const auto& c : s1) vp[c - 'a']++;

		std::vector<int> vtmp(26, 0);
		const std::string tmp = s2.substr(0, s1.size());
		for (const auto& c : tmp) vtmp[c - 'a']++;

		if (vtmp == vp)	return true;

		for (size_t i = 1; i <= s2.size() - s1.size(); i++)
		{
			const auto c1 = s2[i - 1];
			const auto c2 = s2[i + s1.size() - 1];
			vtmp[c1 - 'a']--;
			vtmp[c2 - 'a']++;
			if (vtmp == vp)	return true;
		}
		return false;
	}
};
