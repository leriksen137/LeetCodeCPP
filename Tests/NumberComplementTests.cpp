#include "catch.hpp"

#include "NumberComplement.cpp"

TEST_CASE("Number Complement, Example 1", "[LeetCode]")
{
	Solution s;
	int num = 5;

	REQUIRE(s.findComplement(num) == 2);
}

TEST_CASE("Number Complement, Example 2", "[LeetCode]")
{
	Solution s;
	int num = 1;

	REQUIRE(s.findComplement(num) == 0);
}
