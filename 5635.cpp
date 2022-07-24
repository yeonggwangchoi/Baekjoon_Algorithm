#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
	string name = "";
	int day = 0;
	int month = 0;
	int year = 0;
};

bool cmp(const Person& x, const Person& y)
{
	if (x.year == y.year)
	{
		if (x.month == y.month)
		{
			return x.day < y.day;
		}
		else
		{
			return x.month < y.month;
		}
	}
	else
	{
		return x.year < y.year;
	}
}

int main()
{
	int N;
	cin >> N;
	Person* p = new Person[N];
	for (int i = 0; i < N; i++)
	{
		cin >> p[i].name >> p[i].day >> p[i].month >> p[i].year;
	}
	sort(p, p + N, cmp);
	
	cout << p[N - 1].name << "\n" << p[0].name;
}