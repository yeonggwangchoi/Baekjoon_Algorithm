#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;	//입력 받을 수
	queue <int> q;	//큐 생성
	for (int i = 1; i <= N; i++) {
		q.push(i);	//1부터 N까지 수를 큐에 넣음
	}
	cout << "<";
	int i = 1;
	while (q.size() != 1) //큐의 size가 1이 아닐때 반복
	{
		if (K == 1)	//K가 1이면 
		{
			cout << q.front() << ", ";
			q.pop();
		}
		else
		{
			if (i % K == 0) {	//K번째 순서일때 꺼내는 조건식
				cout << q.front() << ", ";
				q.pop();
				i = 1;	//i 초기화
			}
			q.push(q.front());
			q.pop();
			i++;
		}
	}
	cout << q.front() << ">";
}

