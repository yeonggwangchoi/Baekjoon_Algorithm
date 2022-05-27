#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int testcase, a, b, num=1;

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		num = 1;
		cin >> a >> b;
		for (int j = 0; j < b; j++)
		{
			num = (num*a) % 10;	
		}
		if (num == 0)
			cout<<"10\n";
		cout << num << "\n";
	}
	return 0;
}


