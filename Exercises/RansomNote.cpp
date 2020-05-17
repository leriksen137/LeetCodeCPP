#include <string>
#include <map>

class Solution
{
public:
	bool canConstruct(std::string ransomNote, std::string magazine)
	{
		std::map<char, int> ransomOcc;
		for (const char& c : ransomNote) ransomOcc[c]++;

		std::map<char, int> magazineOcc;
		for (const char& c : magazine) magazineOcc[c]++;

		for (const std::pair<char, int>& p : ransomOcc)
			if (magazineOcc[p.first] < p.second)
				return false;

		return true;
	}
};
