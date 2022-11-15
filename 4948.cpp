#include <iostream>
using namespace std;

int Eratos(int n)
{
	if (n <= 1) return 1;

	bool* PrimeArray = new bool[2*n+1];

	for (int i = n + 1; i <= 2 * n; i++)
		PrimeArray[i] = true;

	int k = 0;

	for (int i = 2; i * i <= 2 * n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= 2 * n; j += i)
				PrimeArray[j] = false;
	}

	for (int i = n + 1; i <= 2 * n; i++)
	{
		if (PrimeArray[i])
			k++;
	}

	return k;
}

int main()
{
	int num = 1;
	while (cin>>num)
	{
		if (num == 0)
			break;
		int k = Eratos(num);
		cout << k << "\n";
	}
}