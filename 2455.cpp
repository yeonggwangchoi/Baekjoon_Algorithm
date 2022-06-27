#include <iostream>
using namespace std;

int main()
{
	int out_person, in_person, max = 0, sum_person = 0;
	//승차한 사람수, 하차한 사람수, 가장 인원이 많을때 사람수, 총인원수
	for (int i = 0; i < 4; i++) //4개 정거장을 거치기 때문에
	{
		cin >> out_person >> in_person;
		sum_person -= out_person; //내린 사람 수를 총인원수에서 빼줌
		sum_person += in_person;//탄 사람 수를 총인원수에서 더해줌
		if (max < sum_person)	//가장 인원이 많을때보다 총인원이 많으면
			max = sum_person;	//max에 총인원을 대입
	}
	cout << max;
}

