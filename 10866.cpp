#include <iostream>
#include <list>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	list <int> l;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		
		if (str == "push_front")
		{
			int num;
			cin >> num;
			l.push_front(num);
		}
		else if (str == "push_back")
		{
			int num;
			cin >> num;
			l.push_back(num);
		}
		else if (str == "pop_front")
		{
			if (l.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << l.front() << "\n";
				l.pop_front();
			}
		}
		else if (str == "pop_back")
		{
			if (l.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << l.back() << "\n";
				l.pop_back();
			}
		}
		else if (str == "front")
		{
			if (l.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << l.front() << "\n";
			}
		}
		else if (str == "back") 
		{
			if (l.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << l.back() << "\n";
			}
		}
		else if (str == "empty")
		{
			if (l.empty())
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (str == "size")
		{
			cout << l.size() << "\n";
		}
	}
}