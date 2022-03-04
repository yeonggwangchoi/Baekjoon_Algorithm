#include<iostream>
using namespace std;

int main()
{

	int A, B, V, y, X;
	double x = 0.0;

	cin >> A >> B >> V;
	y = (V - B) / (A - B);
	x = ((double)V - (double)B) / ((double)A - (double)B) * 10.0;
	if ((int)x > y * 10)
	{
		X = (V - B) / (A - B) + 1;
	}
	else
	{
		X = (V - B) / (A - B);
	}

	cout << X << endl;

	return 0;
}