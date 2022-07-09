#include <iostream>
using namespace std;

#define NN 10001

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int count[NN]{ 0, };
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		count[num - 1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (count[i] != 0)
			for (int j = 0; j < count[i]; j++)
				cout << i + 1 << "\n";
	}
}

