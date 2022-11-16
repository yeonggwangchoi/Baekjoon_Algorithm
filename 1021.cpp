#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	deque<int> dq(N);
	vector<int> v(M);
	for (int i = 0; i < N; i++) {
		dq[i] = i + 1;
	}
	for (int i = 0; i < M; i++) {
		cin >> v[i];
	}
	int i = 0;
	while (true)
	{
		if (dq.front() != v[i])
		{

		}
	}
}