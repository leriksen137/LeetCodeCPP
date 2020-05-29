#include "CourseSchedule.cpp"
#include "catch.hpp"


TEST_CASE("Course Schedule, Example 1", "[LeetCode]")
{
	Solution s;
	int numCourses = 2;
	std::vector<std::vector<int>> prerequisites = { {1, 0} };

	REQUIRE(s.canFinish(numCourses, prerequisites) == true);
}

TEST_CASE("Course Schedule, Example 2", "[LeetCode]")
{
	Solution s;
	int numCourses = 2;
	std::vector<std::vector<int>> prerequisites = { {1, 0}, {0, 1} };

	REQUIRE(s.canFinish(numCourses, prerequisites) == false);
}
