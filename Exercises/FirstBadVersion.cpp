class Solution
{
public:
	Solution(int version) : mpFirstBadVersion(version) {}
	int firstBadVersion(int n)
	{
		unsigned int start = 1;
		unsigned int end = n;
		unsigned int prevBad = -1;
		while (start < end) {
			unsigned int mid = (start + end) / 2;
			if (isBadVersion(mid)) {
				end = mid;
			}
			else {
				start = mid + 1;
			}
		}
		return end;
	}

private:
	int mpFirstBadVersion;
	bool isBadVersion(int version)
	{
		return (version >= mpFirstBadVersion);
	}
};
