#include "RansomNote.cpp"
#include "catch.hpp"

#include <string>


TEST_CASE("Ransom Note, Example 1", "[LeetCode]")
{
	Solution s;
	std::string ransomNote = "a";
	std::string magazine = "b";

	REQUIRE(s.canConstruct(ransomNote, magazine) == false);
}

TEST_CASE("Ransom Note, Example 2", "[LeetCode]")
{
	Solution s;
	std::string ransomNote = "aa";
	std::string magazine = "ab";

	REQUIRE(s.canConstruct(ransomNote, magazine) == false);
}

TEST_CASE("Ransom Note, Example 3", "[LeetCode]")
{
	Solution s;
	std::string ransomNote = "aa";
	std::string magazine = "aab";

	REQUIRE(s.canConstruct(ransomNote, magazine) == true);
}
