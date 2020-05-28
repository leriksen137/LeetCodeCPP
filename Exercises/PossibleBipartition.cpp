#include <vector>
#include <functional>

class Solution
{
public:
	bool possibleBipartition(int N, std::vector<std::vector<int>>& dislikes)
	{
		//make 0 indexed
		for (auto& v : dislikes)
			for (int& c : v)
				c--;

		std::vector<std::vector<int>> graph(N);
		for (const auto& v : dislikes)
		{
			graph[v[0]].push_back(v[1]);
			graph[v[1]].push_back(v[0]);
		}

		std::vector<int> colors(N, 0);
		std::vector<bool> visited(N, 0);
		std::function<bool(int, int)> dfs;
		dfs = [&](int to, int color)
		{
			visited[to] = true;
			colors[to] = color;
			int new_color = -color;
			if (new_color == 0) color = 1;
			for (int v : graph[to])
			{
				if (colors[v] != 0 && colors[v] != new_color)
				{
					return false;
				}
				if (!visited[v] && !dfs(v, new_color))
				{
					return false;
				}
			}
			return true;
		};

		for (int i = 0; i < N; i++)
		{
			if (!visited[i] && !dfs(i, 1))
			{
				return false;
			}
		}
		return true;
	}

};
