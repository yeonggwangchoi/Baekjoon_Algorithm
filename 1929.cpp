#include <iostream>
using namespace std;

int main() 
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int num1, num2;

	cin >> num1 >> num2; //소수를 찾을 범위를 받음

	bool* PrimeArray = new bool[num2 + 1]; //범위에 따른 동적 할당

	for (int i = 2; i <= num2; i++)
		PrimeArray[i] = true;		//배열 모두 true로 초기화

	for (int i = 2; i * i <= num2; i++)
	{
		if (PrimeArray[i])	//true면 실행
			for (int j = i * i; j <= num2; j += i)
				PrimeArray[j] = false;
	}
	for (int i = num1; i <= num2; i++)
	{
		if (PrimeArray[i])
			cout << i << "\n";
	}
}