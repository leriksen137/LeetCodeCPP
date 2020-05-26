#include <vector>
#include <unordered_map>
#include <algorithm>


class Solution
{
public:
    int findMaxLength(std::vector<int>& nums)
	{
        int numOnes{ 0 };
        int maxLength{ 0 };
        std::unordered_map<int, int> diff{ {0,-1} };
        for (int i{ 0 }; i < static_cast<int>(nums.size()); i++)
        {
            if (nums[i]) { numOnes++; }
            else { numOnes--; }

            if (diff.find(numOnes) != diff.end())
            {
                maxLength = std::max(maxLength, i - diff[numOnes]);
            }
            else
            {
                diff[numOnes] = i;
            }
        }
        return maxLength;
	}
};
