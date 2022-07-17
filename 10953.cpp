#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str[1] == ',')
		{
			cout << (str[0] - '0') + (str[2] - '0') << "\n";
		}
	}
}s