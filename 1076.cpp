#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	string str;
	vector<string> vec;
	for (int i = 0; i < 3; i++)
	{
		cin >> str;
		if (i == 0 || i == 1)
		{
			if (str == "black")
				vec.push_back("0");
			else if (str == "brown")
				vec.push_back("1");
			else if (str == "red")
				vec.push_back("2");
			else if (str == "orange")
				vec.push_back("3");
			else if (str == "yellow")
				vec.push_back("4");
			else if (str == "green")
				vec.push_back("5");
			else if (str == "blue")
				vec.push_back("6");
			else if (str == "violet")
				vec.push_back("7");
			else if (str == "grey")
				vec.push_back("8");
			else if (str == "white")
				vec.push_back("9");
		}
		else
		{
			if (vec[0] == "0" && vec[1] == "0")
			{
				vec.clear();
				if (str == "brown")
					vec.push_back("10");
				else if (str == "red")
					vec.push_back("100");
				else if (str == "orange")
					vec.push_back("1000");
				else if (str == "yellow")
					vec.push_back("10000");
				else if (str == "green")
					vec.push_back("100000");
				else if (str == "blue")
					vec.push_back("1000000");
				else if (str == "violet")
					vec.push_back("10000000");
				else if (str == "grey")
					vec.push_back("100000000");
				else if (str == "white")
					vec.push_back("1000000000");
			}
			else
			{
				if (str == "brown")
					vec.push_back("0");
				else if (str == "red")
					vec.push_back("00");
				else if (str == "orange")
					vec.push_back("000");
				else if (str == "yellow")
					vec.push_back("0000");
				else if (str == "green")
					vec.push_back("00000");
				else if (str == "blue")
					vec.push_back("000000");
				else if (str == "violet")
					vec.push_back("0000000");
				else if (str == "grey")
					vec.push_back("00000000");
				else if (str == "white")
					vec.push_back("000000000");
			}
		}
	}
	for (int i = 0; i<vec.size(); i++)
	{
		cout << vec[i];
	}
}