#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const* argv[]) {

	string s = "         ,r'\"7\n";   // \", \n �� ����ڴ�.
	s += "r`-_   ,'  ,/\n";    // \n �� ����ڴ�.
	s += " \\. \". L_r'\n";    // \\, \", \n �� ����ڴ�.
	s += "   `~\\/\n";         // \\, \n �� ����ڴ�.
	s += "      |\n";           // \n �� ����ڴ�.
	s += "      |";
	cout << s;
	return 0;
}