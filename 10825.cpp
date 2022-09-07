#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	string name = "";
	int kor = 0, eng = 0, math = 0;
};

bool cmp(Student &x, Student &y) {
	if (x.kor > y.kor)
		return true;
	else if (x.kor == y.kor) {
		if (x.eng < y.eng)
			return true;
		else if (x.eng == y.eng) {
			if (x.math > y.math)
				return true;
			else if(x.math == y.math)
				return x.name < y.name;
		}
	}
	return false;
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	Student* st = new Student[N];

	for (int i = 0; i < N; i++) {
		cin >> st[i].name;
		cin >> st[i].kor;
		cin >> st[i].eng;
		cin >> st[i].math;
	}	

	sort(st, st + N, cmp);

	for (int i = 0; i < N; i++) {
		cout << st[i].name << "\n";
	}
}