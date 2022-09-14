#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
public:
	int x = 0;
	int y = 0;
	int c = 1;
};

vector<Person> v;

void cmp(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i].x < v[j].x && v[i].y < v[j].y)
				v[i].c++;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << v[i].c << " ";
	}
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		Person p;
		cin >> p.x >> p.y;

		v.push_back(p);
	}

	cmp(N);
}