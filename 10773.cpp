#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int K;		//K���� ������ �Է� �ޱ� ���� int�� ���� K
	cin >> K;
	stack <int> s;	//stack �ڷᱸ���� Ȱ���ϱ� ���� s�� ����
	int sum = 0;	//���� ���ϱ� ���� ���� sum���� �� �ʱ�ȭ
	for (int i = 0; i < K; i++)
	{
		int num;
		cin >> num; //������ �Է� �ް�

		if (num == 0) //0�̸� ���� ������ �ϹǷ� pop���
		{
			s.pop();
		}
		else        //0�� �ƴϸ� ���� push
		{
			s.push(num);
		}
	}
	while (!s.empty())	//stack�� ������� ����������
	{
		sum += s.top(); //top�� �ִ� ���� �����ְ�
		s.pop();		//top�� �ִ� ���� pop����.
	}

	cout << sum;
}
