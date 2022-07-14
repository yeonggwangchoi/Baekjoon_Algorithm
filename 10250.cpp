#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;	//테스트 케이스
	int H, W, N;	//입력 받을 수
	int num1, num2;	//방 번호
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		//N을 H로 나누었을때 나머지가 0일때와 아닐때 차이가 있다.
		//이유는 예를 들어 6층짜리 호텔에서 6번째 손님이 들어오면
		//num1이 6이여야하는데 0이 된다.
		//따라서 구분 지어줌
		if (N % H == 0)
		{
			num1 = H;
			num2 = N / H;	//나누어 떨어지므로 N/H
		}
		else
		{
			num1 = N % H;
			num2 = N / H + 1;	//나누어 떨어지지 않으므로 +1해줌.
		}
		//num2가 한자리가 아닐때는 사이에 0을 넣을 필요가 없으므로 구분
		if (num2 > 9)
			cout << num1 << num2 << "\n";
		else
			cout << num1 << "0" << num2 << "\n";
	}
}

