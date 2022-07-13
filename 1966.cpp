#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N, M;
		cin >> N >> M;
		queue <int> q;
		int count = 0;
		int max = 0;
		int j;
		int rem = 0;
		for (j = 0; j < N; j++)
		{
			int q_num;
			cin >> q_num;
			if (q_num > max)
				max = q_num;
			q.push(q_num);
			
		}
		for (int k = 0; k < q.size(); k++)
		{
			if (q.front()< max)
			{
				q.push(q.front());
				q.pop();
				count++;
			}
		}
		cout <<count <<"\n";
	}
}