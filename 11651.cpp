#include <iostream>
#include <algorithm>
using namespace std;
class Token {
public:
	int x = 0;
	int y = 0;
};

bool cmp(const Token& x, const Token& y)
{
	if (x.y == y.y)
		return x.x < y.x;
	else
		return x.y < y.y;
}

int main()
{
	int N;
	cin >> N;
	Token* t = new Token[N];
	for (int i = 0; i < N; i++)
	{
		cin >> t[i].x >> t[i].y;
	}
	sort(t, t + N, cmp);

	for (int i = 0; i < N; i++)
	{
		cout << t[i].x << " " << t[i].y << "\n";
	}
}