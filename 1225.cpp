#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string strnum1, strnum2;
	cin >> strnum1 >> strnum2;
	//���ڿ��� �Է� ����.

	vector<int> vec1, vec2;
	//int�� ���� ����
	for (char c : strnum1)
		vec1.push_back(c - '0');
	for (char c : strnum2)
		vec2.push_back(c - '0');
	//���ڿ��� char�� ���ڷ� ��ȯ�� ���Ϳ� ����
	long long sum = 0;
	/*������ ������ int�� �Ѿ�� �����Ƿ�
	* long long �ڷ����� ���*/
	for (int i = 0; i < vec1.size(); i++)
	{
		for (int j = 0; j < vec2.size(); j++)
		{
			sum += vec1[i] * vec2[j];
		}
	}

	cout << sum;
}
