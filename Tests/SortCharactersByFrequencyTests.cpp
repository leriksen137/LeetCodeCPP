#include "SortCharactersByFrequency.cpp"
#include "catch.hpp"


TEST_CASE("Sort Characters By Frequency, Example 1", "[LeetCode]")
{
	Solution s;
	std::string input = "tree";
	std::string output = s.frequencySort(input);

	REQUIRE((output == "eert" || output == "eetr"));
}

TEST_CASE("Sort Characters By Frequency, Example 2", "[LeetCode]")
{
	Solution s;
	std::string input = "cccaaa";
	std::string output = s.frequencySort(input);

	REQUIRE((output == "cccaaa" || output == "aaaccc"));
}

TEST_CASE("Sort Characters By Frequency, Example 3", "[LeetCode]")
{
	Solution s;
	std::string input = "Aabb";
	std::string output = s.frequencySort(input);

	REQUIRE((output == "bbAa" || output == "bbaA"));
}
