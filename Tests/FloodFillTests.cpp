#include "catch.hpp"

#include "FloodFill.cpp"

TEST_CASE("Flood Fill, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<std::vector<int>> image{ {1, 1, 1}, {1, 1, 0}, {1, 0, 1} };
	std::vector<std::vector<int>> expected{ {2, 2, 2}, {2, 2, 0}, {2, 0, 1} };

	REQUIRE(s.floodFill(image, 1, 1, 2) == expected);
}
