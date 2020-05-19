#include "JewelsAndStones.cpp"
#include "catch.hpp"


TEST_CASE("Jewels and Stones, Example 1", "[LeetCode]")
{
	Solution s;
	std::string J = "aA";
	std::string S = "aAAbbbb";

	REQUIRE(s.numJewelsInStones(J, S) == 3);
}

TEST_CASE("Jewels and Stones, Example 2", "[LeetCode]")
{
	Solution s;
	std::string J = "z";
	std::string S = "ZZ";

	REQUIRE(s.numJewelsInStones(J, S) == 0);
}
