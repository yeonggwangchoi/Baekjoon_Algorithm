#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;//테스트 케이스 입력
	int num;//입력 받을 수
	int sum, min;
	//합, 최소 짝수값
	for (int i = 0; i < T; i++)
	{
		sum = 0;
		min = 102;
		//7개의 수를 받기 위한 for lopp
		for (int j = 0; j < 7; j++)
		{
			cin >> num;
			//수를 입력 받고 그 수가 짝수이면
			if (num % 2 == 0)
			{
				sum += num;
				//sum에 더하고
				//min보다 작으면 min에 num 대입
				if (min > num)
					min = num;
			}
		}
		//출력
		cout << sum << " " << min << "\n";
	}
}