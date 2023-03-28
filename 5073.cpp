#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int num[3];

		cin >> num[0] >> num[1] >> num[2];
		if (num[0] == 0 && num[1] == 0 && num[2] == 0)
			break;
		else
			if (num[0] == num[1] && num[1] == num[2])
				cout << "Equilateral" << endl;
			else {
				int max = -1;
				for (auto i = 0; i < 3; i++) {
					if (max < num[i])
						max = num[i];
				}
				if (((num[0] + num[1] + num[2]) - max) > max)
					if (num[0] == num[1] || num[1] == num[2] || num[2] == num[0])
						cout << "Isosceles" << endl;
					else {
						cout << "Scalene" << endl;
					}
				else
					cout << "Invalid" << endl;
				
			}
	}
}