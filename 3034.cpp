#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, W, H ,D; //���� ����, ���� ����, ���� ����, �밢�� ����
	cin >> N >> W >> H;

	D = W * W + H * H;
	for (int i = 0; i < N; i++)
	{
		int MatchesNum;
		cin >> MatchesNum;
		if (D >= MatchesNum * MatchesNum)
			cout << "DA\n";
		else
			cout << "NE\n";
	}
}