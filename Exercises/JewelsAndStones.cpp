#include <string>


class Solution
{
public:
	int numJewelsInStones(std::string J, std::string S)
	{
		int count{ 0 };
		for (const char& stone : S) {
			for (const char& jewel : J) {
				if (stone == jewel) {
					count++;
					continue;
				}
			}
		}
		return count;
	}
};
