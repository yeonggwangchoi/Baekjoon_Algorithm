#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int* num = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	int find;
	cin >> find;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (find == num[i])
			count++;
	}
	cout << count;
}