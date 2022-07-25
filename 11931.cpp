#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//정렬 기준 함수 cmp
bool cmp(const int& x, const int& y)
{
	return x > y;
	//정렬 기준은 내림차순으로 정렬
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//위의 코드는 속도 증가를 위해 사용
	int N;
	cin >> N;//N의 값을 입력 받음
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;//수를 입력 받고
		v.push_back(num);//벡터에 저장
	}
	sort(v.begin(), v.end(), cmp);
	//sort함수를 통해 벡터의 처음부터 끝까지 정렬
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
	//벡터안에 정렬된 값 출력
}

