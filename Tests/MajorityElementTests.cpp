#include "catch.hpp"

#include "MajorityElement.cpp"

#include <vector>

TEST_CASE("Majority Element, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<int> nums{ 3,2,3 };

	REQUIRE(s.majorityElement(nums) == 3);
}

TEST_CASE("Majority Element, Example 2", "[LeetCode]")
{
	Solution s;
	std::vector<int> nums{ 2,2,1,1,1,2,2 };

	REQUIRE(s.majorityElement(nums) == 2);
}
