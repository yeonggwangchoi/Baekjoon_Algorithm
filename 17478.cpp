#include <iostream>
using namespace std;

void answer(int n, int rember)
{
	if (n == 0)
	{
		for (int i = rember; i > n; i--) { cout << "____"; }
		cout << "\"����Լ��� ������?\"\n";
		for (int i = rember; i > n; i--) { cout << "____"; }
		cout << "\"��� �Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		for (int i = rember; i > n; i--) { cout << "____"; }
		cout << "��� �亯�Ͽ���.\n";
		return;
	}
	for (int i = rember; i > n; i--) { cout << "____"; }
	cout << "\"����Լ��� ������?\"\n";
	for (int i = rember; i > n; i--) { cout << "____"; }
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	for (int i = rember; i > n; i--) { cout << "____"; }
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	for (int i = rember; i > n; i--) { cout << "____"; }
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	answer(n - 1,rember);
	for (int i = rember; i > n; i--) { cout << "____"; }
	cout << "��� �亯�Ͽ���.\n";
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	answer(n, n);
}