#include <iostream>
#include <algorithm>
using namespace std;

class Token {
public:
	int age = 0;
	string name = "";
	int num = 0;
};

bool cmp(const Token& x, const Token& y)
{
	if (x.age == y.age)
		return x.num < y.num;
	else
		return x.age < y.age;
}

int main()
{
	int N;
	cin >> N;
	Token* t = new Token[N];
	for (int i = 0; i < N; i++)
	{
		cin >> t[i].age >> t[i].name;
		t[i].num = i;
	}
	sort(t, t + N, cmp);

	for (int i = 0; i < N; i++)
	{
		cout << t[i].age << " " << t[i].name << "\n";
	}
}