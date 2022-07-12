#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;	//�Է� ���� ��
	queue <int> q;	//ť ����
	for (int i = 1; i <= N; i++) {
		q.push(i);	//1���� N���� ���� ť�� ����
	}
	cout << "<";
	int i = 1;
	while (q.size() != 1) //ť�� size�� 1�� �ƴҶ� �ݺ�
	{
		if (K == 1)	//K�� 1�̸� 
		{
			cout << q.front() << ", ";
			q.pop();
		}
		else
		{
			if (i % K == 0) {	//K��° �����϶� ������ ���ǽ�
				cout << q.front() << ", ";
				q.pop();
				i = 1;	//i �ʱ�ȭ
			}
			q.push(q.front());
			q.pop();
			i++;
		}
	}
	cout << q.front() << ">";
}

