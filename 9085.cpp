#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n1, n2, sum = 0;
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		sum = 0;
		cin >> n2;
		vector <int>v(n2);
		for (int j = 0; j < n2; j++)
		{
			
			cin >> v[j];
			sum += v[j];
		}
		cout << sum << "\n";
	}
	
}