#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T; //�׽�Ʈ ���̽��� �Է� ���� ����
	cin >> T;

	for (int i = 0; i < T; i++) {
		int c, v; //������ ���� c�� ������ �� v
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets "
			<< c % v << " piece(s).\n";
	}
}

