#include "catch.hpp"

#include "PermutationInString.cpp"

#include <string>

TEST_CASE("Permutation In String, Example 1", "[LeetCode]")
{
	Solution s;
	std::string s1 = "ab";
	std::string s2 = "eidbaooo";

	REQUIRE(s.checkInclusion(s1, s2) == true);
}

TEST_CASE("Permutation In String, Example 2", "[LeetCode]")
{
	Solution s;
	std::string s1 = "ab";
	std::string s2 = "eidboaoo";

	REQUIRE(s.checkInclusion(s1, s2) == false);
}

TEST_CASE("Permutation string longer than target", "[SpecialCase]")
{
	Solution s;
	std::string s1 = "thisstringistoolong";
	std::string s2 = "short";

	REQUIRE(s.checkInclusion(s1, s2) == false);
}
