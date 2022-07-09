#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector <int> vec;
	for (int i = 0; i < N; i++)
	{
		string str; //���ڿ��� �ޱ� ���� string ���� ����
		cin >> str;

		if (str == "push") //"push"�� �Է� �޾�����
		{
			int num;			//stack�� push�� int���� ����
			cin >> num;			//int�� ������ ���� �Է� ����
			vec.push_back(num);	//stack�� push
		}
		else if (str == "top")	//"top"�� �Է� �޾�����
		{
			if (!vec.empty())	//vector�� ������� Ȯ���ϰ�
			{
				cout << vec.back() << "\n";	
				/*������� ������ ������ ���� ���� ���� Ȯ���ϱ� ����
				���� ������ ���� Ȯ��*/
			}
			else
			{
				cout << "-1\n"; //��������� "-1"���
			}
		}
		else if (str == "size") //"size"�� �Է� �޾�����
			cout << vec.size() << "\n"; //vector�� size�� �� ���� size
		else if (str == "pop")	//"pop"�� �Է� �޾�����
		{
			if (!vec.empty())	//stack�� ������� Ȯ���ϰ�
			{
				cout << vec.back() << "\n";
				//������� ������ ������ ���� ��� ��
				vec.pop_back();
				//������ ���Ҹ� ����
			}
			else
			{
				cout << "-1\n";	//��������� "-1"���
			}
		}
		else if (str == "empty")  //������ ����ִ��� Ȯ��
		{
			if (vec.empty())
				cout << "1\n";	//������ ��������� "1"���
			else
				cout << "0\n";	//������� ������ "0"���
		}
	}
}
