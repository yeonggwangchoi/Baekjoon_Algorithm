#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int H, W, N;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int j, k;
		for (j = 1;; j++) {
			if (N - 6 * j < 1)
			{
				break;
			}
		}
		for (k = 0; j < H; k++)
		{
			if (k - (N - 6 * j) == 0)
				break;
		}
		cout << i << "0" << k;
	}
}