#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string strnum1, strnum2;
	cin >> strnum1 >> strnum2;
	//문자열로 입력 받음.

	vector<int> vec1, vec2;
	//int형 벡터 선언
	for (char c : strnum1)
		vec1.push_back(c - '0');
	for (char c : strnum2)
		vec2.push_back(c - '0');
	//문자열을 char형 문자로 변환해 벡터에 저장
	long long sum = 0;
	/*정답의 범위가 int를 넘어갈수 있으므로
	* long long 자료형을 사용*/
	for (int i = 0; i < vec1.size(); i++)
	{
		for (int j = 0; j < vec2.size(); j++)
		{
			sum += vec1[i] * vec2[j];
		}
	}

	cout << sum;
}
