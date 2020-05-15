#include "FirstBadVersion.h"

namespace FirstBadVersion
{
	Solution::Solution(int version) : mpFirstBadVersion(version) {}

	int Solution::firstBadVersion(int n)
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

	bool Solution::isBadVersion(int version)
	{
		return (version >= mpFirstBadVersion);
	}
}