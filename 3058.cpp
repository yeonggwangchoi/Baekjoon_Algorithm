#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;//�׽�Ʈ ���̽� �Է�
	int num;//�Է� ���� ��
	int sum, min;
	//��, �ּ� ¦����
	for (int i = 0; i < T; i++)
	{
		sum = 0;
		min = 102;
		//7���� ���� �ޱ� ���� for lopp
		for (int j = 0; j < 7; j++)
		{
			cin >> num;
			//���� �Է� �ް� �� ���� ¦���̸�
			if (num % 2 == 0)
			{
				sum += num;
				//sum�� ���ϰ�
				//min���� ������ min�� num ����
				if (min > num)
					min = num;
			}
		}
		//���
		cout << sum << " " << min << "\n";
	}
}