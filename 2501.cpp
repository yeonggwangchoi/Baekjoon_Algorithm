#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int N, K, C=0;
	cin >> N;
	cin >> K;
	//1부터 N까지 약수 구하기 위한 for roop
	for (int i = 1; i <= N; i++)	
	{
		if (N % i == 0) {		//약수이면 벡터에 저장
			vec.emplace_back(i);
			C++;	//약수의 갯수
		}
	}
	if (C < K) {
		cout << "0\n";	//약수의 갯수가 K보다 작으면
		return 0;
	}
	cout << vec[K-1];	//아니면
}
