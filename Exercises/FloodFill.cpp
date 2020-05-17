#include <vector>

class Solution
{
public:
	std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor);

private:
	std::vector<std::vector<int>> candidates{ {1,0},{0,1},{-1,0},{0,-1} };
	void fillRecursive(std::vector<std::vector<int>>& image, const int sr, const int sc, const int oldColor, const int newColor);
	bool isValidCoordinate(const std::vector<std::vector<int>>& image, const int sr, const int sc);
	//TODO
};
