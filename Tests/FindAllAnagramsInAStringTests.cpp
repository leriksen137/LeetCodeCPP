#include "catch.hpp"

#include "FindAllAnagramsInAString.cpp"

#include <string>
#include <vector>

TEST_CASE("Find All Anagrams in a String, Example 1", "[LeetCode]")
{
	Solution solution;
	std::string s = "cbaebabacd";
	std::string p = "abc";
	std::vector<int> expected{ 0,6 };

	REQUIRE(solution.findAnagrams(s, p) == expected);
}

TEST_CASE("Find All Anagrams in a String, Example 2", "[LeetCode]")
{
	Solution solution;
	std::string s = "abab";
	std::string p = "ab";
	std::vector<int> expected{ 0, 1, 2 };

	REQUIRE(solution.findAnagrams(s, p) == expected);
}
