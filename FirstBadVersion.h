#pragma once

namespace FirstBadVersion
{
	class Solution
	{
	public:
		Solution(int version);
		int firstBadVersion(int n);
		bool isBadVersion(int version);
	private:
		int mpFirstBadVersion;
	};
}
