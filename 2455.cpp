#include <iostream>
using namespace std;

int main()
{
	int out_person, in_person, max = 0, sum_person = 0;
	//������ �����, ������ �����, ���� �ο��� ������ �����, ���ο���
	for (int i = 0; i < 4; i++) //4�� �������� ��ġ�� ������
	{
		cin >> out_person >> in_person;
		sum_person -= out_person; //���� ��� ���� ���ο������� ����
		sum_person += in_person;//ź ��� ���� ���ο������� ������
		if (max < sum_person)	//���� �ο��� ���������� ���ο��� ������
			max = sum_person;	//max�� ���ο��� ����
	}
	cout << max;
}

