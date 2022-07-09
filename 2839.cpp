#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, C=0;
	cin >> N;
	if (N % 5 == 0)
	{
		cout << N / 5;
	}
	else
	{
		if (N % 15 == 0)
		{
			cout << N / 5 + N / 5 / 3;
		}
		else
		{
			if (N % 15 % 5 == 0)
			{
				cout << N / 15 + N % 15 / 5;
			}
			else
			{
				cout << N;
			}
		}
		
	}
}