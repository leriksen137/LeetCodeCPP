#include "catch.hpp"

#include "ValidPerfectSquare.cpp"

TEST_CASE("Valid Perfect Square, Example 1", "[LeetCode]")
{
	Solution s;
	int num = 16;
	REQUIRE(s.isPerfectSquare(num) == true);
}

TEST_CASE("Valid Perfect Square, Example 2", "[LeetCode]")
{
	Solution s;
	int num = 14;
	REQUIRE(s.isPerfectSquare(num) == false);
}
