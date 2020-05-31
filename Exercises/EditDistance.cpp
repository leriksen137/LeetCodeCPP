#include <string>


class Solution
{
public:
    int minDistance(std::string word1, std::string word2)
    {
        return word1.length() + word2.length();
    }
};
