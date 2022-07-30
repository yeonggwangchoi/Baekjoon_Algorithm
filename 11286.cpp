#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class mycomparison
{
public:
	bool operator() (const int& lhs, const int& rhs) const
	{
		if (abs(lhs) > abs(rhs))
		{
			return true;
		}
		else if (abs(lhs) == abs(rhs))
		{
			if (lhs > rhs) 
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		return false;
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
		if (num == 0) {
			if (pq.empty())
				cout << "0\n";
			else {
				cout<<pq.top()<<"\n";
				pq.pop();
			}
		}
		else
		{
			pq.push(num);
		}
	}
}