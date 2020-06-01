#include "EditDistance.cpp"
#include "catch.hpp"


TEST_CASE("Edit Distance, Example 1", "[LeetCode]")
{
	Solution s;
	std::string word1{ "horse" };
	std::string word2{ "ros" };

	REQUIRE(s.minDistance(word1, word2) == 3);
}

TEST_CASE("Edit Distance, Example 2", "[LeetCode]")
{
	Solution s;
	std::string word1{ "intention" };
	std::string word2{ "execution" };

	REQUIRE(s.minDistance(word1, word2) == 5);
}
