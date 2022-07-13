#include <iostream>
#include <map>
using namespace std;

int main()
{
	int N;
	cin >> N;
	map <int, int> m;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		
		if (num == -1)
			m.insert(0, i);

		m.insert(i, num);
	}
	int rnum;
	cin >> rnum;

	m.erase(rnum);


	for (int v:m.)
	{

	}
}