#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int N, K, C=0;
	cin >> N;
	cin >> K;
	//1���� N���� ��� ���ϱ� ���� for roop
	for (int i = 1; i <= N; i++)	
	{
		if (N % i == 0) {		//����̸� ���Ϳ� ����
			vec.emplace_back(i);
			C++;	//����� ����
		}
	}
	if (C < K) {
		cout << "0\n";	//����� ������ K���� ������
		return 0;
	}
	cout << vec[K-1];	//�ƴϸ�
}
