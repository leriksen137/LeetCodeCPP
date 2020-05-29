#include <vector>


class Solution
{
public:
	bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites)
	{
		while (prerequisites.size())
		{
			std::vector<bool> marked(numCourses, false);

			std::vector<int> p = prerequisites.back();
			prerequisites.pop_back();
			marked[p[0]] = true;
			std::vector<int> toVisit{ p[1] };
			while (toVisit.size())
			{
				int v = toVisit.back();
				toVisit.pop_back();
				if (marked[v]) return false;
				else marked[v] = true;
				for (int i = 0; i < prerequisites.size(); i++)
				{
					if (prerequisites[i][0] == v)
					{
						toVisit.push_back(prerequisites[i][1]);
						prerequisites.erase(prerequisites.begin() + i);
						i--;
					}
				}
			}
		}
		return true;
	}
};
