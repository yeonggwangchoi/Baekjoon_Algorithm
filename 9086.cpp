#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T; //테스트 케이스를 입력 받을 변수
	cin >> T;

	for (int i = 0; i < T; i++) {
		string str; //문자열을 받을 변수
		cin >> str;
		cout << str.front() << str.back() << "\n"; 
		//string의 front 함수는 첫 번째 글자를 반환하고
		//back 함수는 마지막 글자를 반환한다.
	}
}

