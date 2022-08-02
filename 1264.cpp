#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	while (true)
	{
		int c = 0;
		char a[257]={};
		fgets(a, sizeof(a), stdin);

		if (a[0] == '#')
			break;
		for (int i = 0; a[i]!='\0'; i++)
		{
			if (a[i] == 'a'|| a[i] == 'A')
				c++;
			else if (a[i] == 'e'|| a[i] == 'E')
				c++;
			else if (a[i] == 'i'|| a[i] == 'I')
				c++;
			else if (a[i] == 'o'|| a[i] == 'O')
				c++;
			else if (a[i] == 'u'|| a[i] == 'U')
				c++;
		}
		cout << c <<"\n";
	}
}