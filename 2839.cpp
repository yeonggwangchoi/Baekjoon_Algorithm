#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, a = 0;
	cin >> N;

	vector<int> v(100);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
		for (int j = 2; j < v[i]; j++)
		{
			if (v[i] % j != 0)
			{
				a++;
				break;
			}
		}
	}
	cout << a;
}