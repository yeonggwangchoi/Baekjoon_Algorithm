#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int L;
    cin >> L;

    if (L % 5 == 0)
        cout << L / 5;
    else
        cout << L / 5 + 1;

    return 0;
}