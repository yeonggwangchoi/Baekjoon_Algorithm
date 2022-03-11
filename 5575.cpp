#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int sh[3], sm[3], ss[3], fh[3], fm[3], fs[3], th[3], tm[3], ts[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> sh[i] >> sm[i] >> ss[i];
		cin >> fh[i] >> fm[i] >> fs[i];
		ts[i] = fs[i] - ss[i];
		tm[i] = fm[i] - sm[i];
		th[i] = fh[i] - sh[i];
		
		if (ts[i] < 0)
		{
			ts[i] = 60 + ts[i];
			tm[i] -= 1;
		}
		if (ts[i] > 59)
		{
			tm[i] += ts[i] / 60;
			ts[i] = ts[i] % 60;
		}
		if (tm[i] < 0)
		{
			tm[i] = 60 + tm[i];
			th[i] -= 1;
		}
		if (tm[i] > 59)
		{
			tm[i] = tm[i] % 60;
			th[i] += tm[i] / 60;
		}
		if (th[i] < 0)
		{
			th[i] = 24 + th[i];
		}
		if (th[i] > 23)
		{
			th[i] = th[i] % 24;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout<<th[i]<<" "<<tm[i]<<" "<<ts[i]<< "\n";
	}

	return 0;
}