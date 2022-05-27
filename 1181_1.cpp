#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() != b.length()) {		//길이가 다를때는 길이가 작은것을 우선순위
		return a.length() < b.length();
	}
	else {
		return a < b;	//길이가 같을때는 사전순
	}
}
int main()
{
	int N;
	cin >> N;	//케이스 갯수

	vector <string> vec;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (find(vec.begin(), vec.end(), str) == vec.end())//algorithm 헤더 파일에 있는 find 함수를 사용하여 같은 문자가 아닐때면 vector에 저장
			vec.push_back(str);
	}
	sort(vec.begin(), vec.end(), compare);	//algorithm 헤더 파일에 있는 sort 함수를 사용하여 정렬 기준 함수를 기준으로 벡터 시작부터 끝까지 정렬

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
}

