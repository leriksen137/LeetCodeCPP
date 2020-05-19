#include <stack>


class StockSpanner
{
public:
	StockSpanner() {}

	int next(int price)
	{
		int result{ 1 };
		while (!s.empty() && s.top().first <= price)
		{
			result += s.top().second;
			s.pop();
		}
		s.push(std::make_pair(price, result));
		return result;
	}

private:
	std::stack< std::pair<int, int> > s;
};
