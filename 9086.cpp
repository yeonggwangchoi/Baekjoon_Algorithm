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
		string str; //���ڿ��� ���� ����
		cin >> str;
		cout << str.front() << str.back() << "\n"; 
		//string�� front �Լ��� ù ��° ���ڸ� ��ȯ�ϰ�
		//back �Լ��� ������ ���ڸ� ��ȯ�Ѵ�.
	}
}

