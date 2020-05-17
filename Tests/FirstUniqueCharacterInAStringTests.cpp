#include "catch.hpp"

#include "FirstUniqueCharacterInAString.cpp"

TEST_CASE("First Unique Character in a String, Example 1", "[LeetCode]")
{
	Solution solution;
	std::string s = "leetcode";

	REQUIRE(solution.firstUniqChar(s) == 0);
}

TEST_CASE("First Unique Character in a String, Example 2", "[LeetCode]")
{
	Solution solution;
	std::string s = "loveleetcode";

	REQUIRE(solution.firstUniqChar(s) == 2);
}
