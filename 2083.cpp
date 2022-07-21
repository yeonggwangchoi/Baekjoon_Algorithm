#include <iostream>
using namespace std;

class Member {
public:
	string name = "";
	int age = 0;
	int weight = 0;
};

int main()
{	
	while (true)
	{
		Member m;
		int i = 0;
		cin >> m.name >> m.age >> m.weight;
		if (m.name == "#" && m.age == 0 && m.weight == 0)
			break;
		else
		{
			if (m.age > 17 || m.weight > 79)
				cout << m.name << " senior\n";
			else
				cout << m.name << " junior\n";
		}
	}
}