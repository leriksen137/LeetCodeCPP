#include "EditDistance.cpp"
#include "catch.hpp"


TEST_CASE("Edit Distance, Example 1", "[LeetCode]")
{
	Solution s;
	std::string word1{ "horse" };
	std::string word2{ "ros" };

	REQUIRE(s.minDistance(word1, word2) == 3);
}
