#include <iostream>
#include <algorithm>
using namespace std;

class Token {
public:
	int x = 0;
	int y = 0;
};

bool cmp(const Token& token1, const Token& token2)
{
	if (token1.x == token2.x)
	{
		return token1.y < token2.y;
	}
	else
		return token1.x < token2.x;
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
		cout << t[i].x << " " << t[i].y << "\n";
	}
}