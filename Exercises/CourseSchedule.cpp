#include <vector>


class Solution
{
public:
	bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites)
	{
		std::vector<std::vector<int>> requiredFor(numCourses);
		for (const std::vector<int> p : prerequisites)
		{
			requiredFor[p[1]].push_back(p[0]);
		}

		std::vector<int> degree(numCourses, 0);
		for (const std::vector<int>& rv : requiredFor)
		{
			for (const int& v : rv)
			{
				degree[v]++;
			}
		}

		for (int i{ 0 }; i < numCourses; i++)
		{
			int j;
			for (j = 0; j < numCourses; j++)
			{
				if (degree[j] == 0)
				{
					break;
				}
			}
			if (j == numCourses)
			{
				return false;
			}
			degree[j]--;
			for (const int v : requiredFor[j])
			{
				degree[v]--;
			}
		}
		return true;
	}
	
};
