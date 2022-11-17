#include <iostream>
using namespace std;

int hansu(int x);

int main()
{
	int num;
	cin >> num;

	int han = hansu(num);
	
	if (num == 1000)
		han--;
	
	cout << han;
}

int hansu(int x) {
	int res=0;
	if (x < 99)
		return x;
	else {
		for (int i = 100; i <= x; i++) {
			int n = i;
			int num[4];
			int j = 0;
			while (n!=0)
			{
				num[j] = n % 10;
				n = n / 10;
				j++;
			}

			if (num[1] - num[0] == num[2] - num[1])
				res++;
		}
		return res + 99;
	}
}