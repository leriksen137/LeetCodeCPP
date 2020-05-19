#include "ValidPerfectSquare.cpp"
#include "catch.hpp"


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
