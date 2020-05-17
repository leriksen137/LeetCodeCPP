#include "catch.hpp"

#include "SingleElementInASortedArray.cpp"

#include <vector>

TEST_CASE("Single Element in a Sorted Array, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<int> nums{ 1, 1, 2, 3, 3, 4, 4, 8, 8 };

	REQUIRE(s.singleNonDuplicate(nums) == 2);
}

TEST_CASE("Single Element in a Sorted Array, Example 2", "[LeetCode]")
{
	Solution s;
	std::vector<int> nums{ 3, 3, 7, 7, 10, 11, 11 };

	REQUIRE(s.singleNonDuplicate(nums) == 10);
}
