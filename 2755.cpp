#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	float sums = 0.0;
	float sumh = 0.0;
	for (auto i = 0; i < n; ++i) {
		string str;
		cin >> str;
		float h;
		cin >> h;
		string s;
		cin >> s;
		if (s == "A+")
			sums += h * 4.3;
		else if (s == "A0")
			sums += h * 4.0;
		else if (s == "A-")
			sums += h * 3.7;
		else if (s == "B+")
			sums += h * 3.3;
		else if (s == "B0")
			sums += h * 3.0;
		else if (s == "B-")
			sums += h * 2.7;
		else if (s == "C+")
			sums += h * 2.3;
		else if (s == "C0")
			sums += h * 2.0;
		else if (s == "C-")
			sums += h * 1.7;
		else if (s == "D+")
			sums += h * 1.3;
		else if (s == "D0")
			sums += h * 1.0;
		else if (s == "D-")
			sums += h * 0.7;
		else
			sums += 0;

		sumh += h;
	}
	printf("%.2f", sums / sumh);
}