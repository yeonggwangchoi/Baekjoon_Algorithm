#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//���� ���� �Լ� cmp
bool cmp(const int& x, const int& y)
{
	return x > y;
	//���� ������ ������������ ����
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//���� �ڵ�� �ӵ� ������ ���� ���
	int N;
	cin >> N;//N�� ���� �Է� ����
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;//���� �Է� �ް�
		v.push_back(num);//���Ϳ� ����
	}
	sort(v.begin(), v.end(), cmp);
	//sort�Լ��� ���� ������ ó������ ������ ����
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
	//���;ȿ� ���ĵ� �� ���
}

