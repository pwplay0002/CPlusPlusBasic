//newstruct.cpp
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable * ps = new inflatable;
	cout << "모형풍선의 이름을 입력하십시오: ";
	cin.get(ps->name, 20);//멤버접근 방법1
	cout << "부피를 세제곱 피트 단위로 입력하십시오: ";
	cin >> (*ps).volume;//멤버접근 방법2
	cout << "가격을 달러 단위로 입력하십시오: $";
	cin >> ps->price;
	cout << "이름: " << (*ps).name << endl;//제2 방법
	cout << "부피: " << ps->volume << " cubic feet\n";//제1 방법
	cout << "가격: $" << ps->price << endl;//제1 방법
	delete ps;
	return 0;
}