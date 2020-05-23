#include "IntervalListIntersections.cpp"
#include "catch.hpp"


TEST_CASE("Interval List Intersections, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<std::vector<int>> A {{0, 2}, {5, 10}, {13, 23}, {24, 25}};
	std::vector<std::vector<int>> B {{1, 5}, {8, 12}, {15, 24}, {25, 26}};
	std::vector<std::vector<int>> expected {{1, 2}, {5, 5}, {8, 10}, {15, 23}, {24, 24}, {25, 25}};

	REQUIRE(s.intervalIntersection(A, B) == expected);
}
