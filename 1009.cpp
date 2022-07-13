#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	long long int testcase, a, b, num=1;

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		num = 1;
		cin >> a >> b;
		for (int j = 0; j < b; j++)
		{
			num *= a;
			num = num % 10;
		}
		if (num == 0)
			cout<<"10\n";
		else
			cout << num << "\n";
	}
}


