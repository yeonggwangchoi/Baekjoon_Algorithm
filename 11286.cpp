#include <iostream>
#include <queue>
using namespace std;

class mycomparison
{
	bool reverse;
public:
	mycomparison(const bool& revparam = false)
	{
		reverse = revparam;
	}
	bool operator() (const int& lhs, const int& rhs) const
	{
		if (reverse) return (lhs > rhs);
		else return (lhs < rhs);
	}
};

int main()
{
	int N;
	cin >> N;
	priority_queue<int,vector<int>,mycomparison> pq;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num > 0)
		{
			if (num == 0)
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
			else
			{

			}
		}
		else
		{
			if (num == 0)
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
			else
			{

			}
		}
	}
}