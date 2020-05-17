#include "catch.hpp"

#include "RemoveKDigits.cpp"

#include <string>

TEST_CASE("Remove K Digits, Example 1", "[LeetCode]")
{
	Solution s;
	std::string num = "1432219";
	int k = 3;

	REQUIRE(s.removeKdigits(num, k) == "1219");
}

TEST_CASE("Remove K Digits, Example 2", "[LeetCode]")
{
	Solution s;
	std::string num = "10200";
	int k = 1;

	REQUIRE(s.removeKdigits(num, k) == "200");
}

TEST_CASE("Remove K Digits, Example 3", "[LeetCode]")
{
	Solution s;
	std::string num = "10";
	int k = 2;

	REQUIRE(s.removeKdigits(num, k) == "0");
}
