#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long int num1 = 0, num2 = 1, fibo = 0;
	int n; // �� ��° �Ǻ���ġ ���� ���� ����
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		fibo = num1 + num2; //�Ǻ���ġ ���� ���� �� ���� ����
		num1 = num2; //���� �μ��� �ٲٱ�(������Ʈ �ϱ�) ����
		num2 = fibo;
	}
	if (n == 1)
		//n==0 �϶��� ������ ���� �ʾ� 0�� ��µǰ�
		//n==1�϶��� 1�� ��� �Ǿ� ������ 0�� ��µ�
		cout << "1"; //���� 1�϶� ���� ó��
	else
		cout << fibo;
}

