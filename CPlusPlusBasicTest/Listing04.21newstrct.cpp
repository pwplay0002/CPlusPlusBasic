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
	cout << "����ǳ���� �̸��� �Է��Ͻʽÿ�: ";
	cin.get(ps->name, 20);//������� ���1
	cout << "���Ǹ� ������ ��Ʈ ������ �Է��Ͻʽÿ�: ";
	cin >> (*ps).volume;//������� ���2
	cout << "������ �޷� ������ �Է��Ͻʽÿ�: $";
	cin >> ps->price;
	cout << "�̸�: " << (*ps).name << endl;//��2 ���
	cout << "����: " << ps->volume << " cubic feet\n";//��1 ���
	cout << "����: $" << ps->price << endl;//��1 ���
	delete ps;
	return 0;
}