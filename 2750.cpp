#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {	//������������ ����
	return a < b;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int tc;
	vector<int> vec;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end(), compare); //���� ������ ���� algorithm ��� ������ sort �Լ� ���

	for (int i = 0; i < tc; i++)
	{
		cout << vec[i] << "\n";
	}
}

