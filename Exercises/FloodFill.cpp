#include <vector>


class Solution
{
public:
	std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor)
	{
		const int oldColor = image[sr][sc];
		fillRecursive(image, sr, sc, oldColor, newColor);
		return image;
	}

private:
	std::vector<std::vector<int>> candidates{ {1,0},{0,1},{-1,0},{0,-1} };

	void fillRecursive(std::vector<std::vector<int>>& image, const int sr, const int sc, const int oldColor, const int newColor)
	{
		if (image[sr][sc] == newColor) return;
		image[sr][sc] = newColor;
		for (const std::vector<int>& c : candidates)
		{
			const int dr = sr + c[0];
			const int dc = sc + c[1];
			if (isValidCoordinate(image, dr, dc) && image[dr][dc] == oldColor)
			{
				fillRecursive(image, dr, dc, oldColor, newColor);
			}
		}
	}

	bool isValidCoordinate(const std::vector<std::vector<int>>& image, const size_t sr, const size_t sc)
	{
		return (sr >= 0 && sc >= 0 && sr < image.size() && sc < image[0].size());
	}
};
