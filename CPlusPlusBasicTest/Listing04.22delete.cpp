#include <iostream>
#include <cstring>
using namespace std;
char * getname();
int main()
{
	char * name; //�����͸� �������� �޸𸮴� �������� �ʴ´�.

	name = getname();//���ڿ��� �ּҸ� name�� �����Ѵ�.
	cout << (int *)name << ": " << name << "\n";
	delete[] name;//�޸𸮸� �����Ѵ�.

	name = getname();//������ �޸𸮸� �ٽ� ����Ѵ�.
	cout << (int *)name << ": " << name << "\n";
	delete[] name;//�޸𸮸� �ٽ� �����Ѵ�.
	return 0;
}

char * getname()//�� ���ڿ��� ����Ű�� �����͸� �����Ѵ�.
{
	char temp[80];
	cout << "�̸��� �Է��Ͻʽÿ�: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);//���ڿ��� �� ���� �������� ����

	return pn;//temp �Ҹ� //����� ���ڿ��� ����Ǿ� �ִ� �޸� ����� �ּ� pn�� �����Ѵ�.
}