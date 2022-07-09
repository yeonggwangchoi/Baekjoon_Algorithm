#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector <int> vec;
	for (int i = 0; i < N; i++)
	{
		string str; //문자열을 받기 위한 string 변수 선언
		cin >> str;

		if (str == "push") //"push"를 입력 받았을때
		{
			int num;			//stack에 push할 int변수 선언
			cin >> num;			//int형 변수에 정수 입력 받음
			vec.push_back(num);	//stack에 push
		}
		else if (str == "top")	//"top"를 입력 받았을때
		{
			if (!vec.empty())	//vector가 비었는지 확인하고
			{
				cout << vec.back() << "\n";	
				/*비어있지 않으면 스택의 가장 위의 값을 확인하기 위해
				벡터 마지막 값을 확인*/
			}
			else
			{
				cout << "-1\n"; //비어있으면 "-1"출력
			}
		}
		else if (str == "size") //"size"를 입력 받았을때
			cout << vec.size() << "\n"; //vector의 size가 곧 스택 size
		else if (str == "pop")	//"pop"을 입력 받았을때
		{
			if (!vec.empty())	//stack이 비었는지 확인하고
			{
				cout << vec.back() << "\n";
				//비어있지 않으면 마지막 원소 출력 후
				vec.pop_back();
				//마지막 원소를 꺼냄
			}
			else
			{
				cout << "-1\n";	//비어있으면 "-1"출력
			}
		}
		else if (str == "empty")  //스택이 비어있는지 확인
		{
			if (vec.empty())
				cout << "1\n";	//스택이 비어있으면 "1"출력
			else
				cout << "0\n";	//비어있지 않으면 "0"출력
		}
	}
}
