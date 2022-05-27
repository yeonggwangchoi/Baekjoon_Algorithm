#include <iostream>
#include <list>
using namespace std;

bool compare(const std::string& first, const std::string& second)
{
	if (first.length() == second.length())
	{
		return first < second;
	}
	return first.length() < second.length();
}

int main(void)
{
	string str1, str2;
	list <string> fullstr;
	int N;
	size_t max = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{

		cin >> str1;

		fullstr.push_back(str1);
	}

	fullstr.sort(compare);

	list<string>::iterator iter;
	for (iter = fullstr.begin(); iter != fullstr.end(); iter++) {
		cout << *iter << "\n";
	}
}

