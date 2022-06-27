#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, C=0;
	cin >> N;
	if (N / 5 != 0)
	{
		if (N % 3 == 0)
		{
			C += N / 5;
			N = N % 5;
		}
		else
		{
			C += N / 5;
			N = N % 5;
		}
	}
	else if (N / 5 == 0)
	{
		
		cout << C << N;
	}
	if (N / 3 != 0)
	{
		C += N / 3;
		N = N % 3;
		cout << C << N;
	}

	if (N == 0)
	{
		cout << C << "\n";
	}
	else
	{
		cout << "-1\n";
	}
}