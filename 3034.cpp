#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, W, H ,D; //성냥 갯수, 가로 길이, 세로 길이, 대각선 길이
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