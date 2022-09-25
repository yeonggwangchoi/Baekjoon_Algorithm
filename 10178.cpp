#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T; //테스트 케이스를 입력 받을 변수
	cin >> T;

	for (int i = 0; i < T; i++) {
		int c, v; //사탕의 개수 c와 형제의 수 v
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets "
			<< c % v << " piece(s).\n";
	}
}

