#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int H, W, N;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		if (N / H > 9 )
		{
			cout << H << N / H << "\n";
		}
		else if( N % H == 0)
		{
			cout << H << '0' << N / H << "\n";
		}
		else if(N/H+1>9)
		{
			cout << N % H << N / H + 1<<"\n";
		}
		else
		{
			cout << N % H << '0' << N / H + 1 << "\n";
		}
	}
}