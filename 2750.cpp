#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {	//오름차순으로 정렬
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
	sort(vec.begin(), vec.end(), compare); //벡터 정렬을 위해 algorithm 헤더 파일의 sort 함수 사용

	for (int i = 0; i < tc; i++)
	{
		cout << vec[i] << "\n";
	}
}

