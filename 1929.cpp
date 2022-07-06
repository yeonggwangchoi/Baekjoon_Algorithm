#include <iostream>
using namespace std;

int main() 
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int num1, num2;

	cin >> num1 >> num2; //�Ҽ��� ã�� ������ ����

	bool* PrimeArray = new bool[num2 + 1]; //������ ���� ���� �Ҵ�

	for (int i = 2; i <= num2; i++)
		PrimeArray[i] = true;		//�迭 ��� true�� �ʱ�ȭ

	for (int i = 2; i * i <= num2; i++)
	{
		if (PrimeArray[i])	//true�� ����
			for (int j = i * i; j <= num2; j += i)
				PrimeArray[j] = false;
	}
	for (int i = num1; i <= num2; i++)
	{
		if (PrimeArray[i])
			cout << i << "\n";
	}
}