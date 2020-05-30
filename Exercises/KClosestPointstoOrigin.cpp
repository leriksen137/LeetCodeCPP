#include <vector>
#include <algorithm>


class Solution
{
public:
    std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int K)
    {
        std::partial_sort(points.begin(), points.begin() + K, points.end(), [](std::vector<int>& p, std::vector<int>& q) {
            return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
            });
        return std::vector<std::vector<int>>(points.begin(), points.begin() + K);
    }
};
