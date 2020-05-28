#include "CountingBits.cpp"
#include "catch.hpp"


TEST_CASE("Counting Bits, Example 1", "[LeetCode]")
{
	Solution s;
	int n = 2;
	std::vector<int> solution{ 0, 1, 1 };

	REQUIRE(s.countBits(n) == solution);
}

TEST_CASE("Counting Bits, Example 2", "[LeetCode]")
{
	Solution s;
	int n = 5;
	std::vector<int> solution{ 0, 1, 1, 2, 1, 2 };

	REQUIRE(s.countBits(n) == solution);
}
