#include <vector>
#include <algorithm>


class Solution
{
public:
	int singleNonDuplicate(std::vector<int>& nums)
	{
		if (nums.size() == 1) return nums[0];

		int start{ 0 };
		int end{ static_cast<int>(nums.size()) - 1 };

		while (end - start > 1)
		{
			int mid{ (start + end) / 2 };
			int mid_comp{ mid % 2 ? mid - 1 : mid + 1 };

			if (nums[mid] == nums[mid_comp])
			{
				start = std::max(mid, mid_comp) + 1;
			}
			else
			{
				end = std::min(mid, mid_comp);
			}
		}

		return (start % 2 == 0) ? nums[start] : nums[end];
	}
};
