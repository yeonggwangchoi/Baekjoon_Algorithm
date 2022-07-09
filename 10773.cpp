#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int K;		//K개의 정수를 입력 받기 위한 int형 변수 K
	cin >> K;
	stack <int> s;	//stack 자료구조를 활용하기 위해 s를 선언
	int sum = 0;	//합을 구하기 위한 변수 sum선언 및 초기화
	for (int i = 0; i < K; i++)
	{
		int num;
		cin >> num; //정수를 입력 받고

		if (num == 0) //0이면 값을 지워야 하므로 pop사용
		{
			s.pop();
		}
		else        //0이 아니면 값을 push
		{
			s.push(num);
		}
	}
	while (!s.empty())	//stack이 비어있지 않을때까지
	{
		sum += s.top(); //top에 있는 값을 더해주고
		s.pop();		//top에 있는 값을 pop해줌.
	}

	cout << sum;
}
