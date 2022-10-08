#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long int num1 = 0, num2 = 1, fibo = 0;
	int n; // 몇 번째 피보나치 수를 위한 변수
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		fibo = num1 + num2; //피보나치 수는 앞의 두 수를 더함
		num1 = num2; //앞의 두수를 바꾸기(업데이트 하기) 위해
		num2 = fibo;
	}
	if (n == 1)
		//n==0 일때는 포문이 돌지 않아 0이 출력되고
		//n==1일때는 1일 출력 되야 하지만 0이 출력됨
		cout << "1"; //따라서 1일때 예외 처리
	else
		cout << fibo;
}

