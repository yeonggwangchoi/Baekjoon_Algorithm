#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() != b.length()) {		//���̰� �ٸ����� ���̰� �������� �켱����
		return a.length() < b.length();
	}
	else {
		return a < b;	//���̰� �������� ������
	}
}
int main()
{
	int N;
	cin >> N;	//���̽� ����

	vector <string> vec;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (find(vec.begin(), vec.end(), str) == vec.end())//algorithm ��� ���Ͽ� �ִ� find �Լ��� ����Ͽ� ���� ���ڰ� �ƴҶ��� vector�� ����
			vec.push_back(str);
	}
	sort(vec.begin(), vec.end(), compare);	//algorithm ��� ���Ͽ� �ִ� sort �Լ��� ����Ͽ� ���� ���� �Լ��� �������� ���� ���ۺ��� ������ ����

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
}

