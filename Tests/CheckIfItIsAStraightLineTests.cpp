#include "CheckIfItIsAStraightLine.cpp"
#include "catch.hpp"

TEST_CASE("Check if it is a Straight Line, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<std::vector<int>> coordinates{ {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7} };

	REQUIRE(s.checkStraightLine(coordinates) == true);
}

TEST_CASE("Check if it is a Straight Line, Example 2", "[LeetCode]")
{
	Solution s;
	std::vector<std::vector<int>> coordinates{ {1, 1}, {2, 2}, {3, 4}, {4, 5}, {5, 6}, {7, 7} };

	REQUIRE(s.checkStraightLine(coordinates) == false);
}
