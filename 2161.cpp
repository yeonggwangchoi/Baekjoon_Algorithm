#include <iostream>
#include <queue>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	queue<int> q;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		q.push(i);
	}
	int i = 1;
	while (!q.empty())
	{
		if (i % 2 == 0)
		{
			q.push(q.front());
			q.pop();
		}
		if (i % 2 != 0)
		{
			cout << q.front() << " ";
			q.pop();
		}
		i++;
	}
}