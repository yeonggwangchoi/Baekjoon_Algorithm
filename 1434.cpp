#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector <int> v1;
	vector <int> v2;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v1.push_back(num);
	}
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		v2.push_back(num);
		for (int j = 0; j < N; j++)
		{
			if (v2[i] == v1[j])
				v2[i] = 0;
			else if()
		}
	}
}