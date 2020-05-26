#include "ContiguousArray.cpp"
#include "catch.hpp"


TEST_CASE("Contiguous Array, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<int> nums{ 0, 1 };

	REQUIRE(s.findMaxLength(nums) == 2);
}

TEST_CASE("Contiguous Array, Example 2", "[LeetCode]")
{
	Solution s;
	std::vector<int> nums{ 0, 1, 0};

	REQUIRE(s.findMaxLength(nums) == 2);
}

TEST_CASE("Contiguous Array, Stress Test", "[Stress Test]")
{
	Solution s;
	std::vector<int> nums{};
	for (int i{ 0 }; i < 50'000; i++)
	{
		if ((i % 3 == 0) || (i % 8 == 0) || (i % 17 == 0)) { nums.push_back(1); }
		else { nums.push_back(0); }
	}

	REQUIRE(s.findMaxLength(nums) == 40);
}
