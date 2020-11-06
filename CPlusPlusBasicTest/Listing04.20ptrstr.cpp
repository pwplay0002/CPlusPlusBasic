#include <iostream>
#include <cstring>//strlen(), strcpy()을 선언
int main()
{
	using namespace std;

	char animal[20] = "bear";//animal에 bear가 들어있다
	const char * bird = "wren";//bird에 문자열의 주소가 들어 있다
	char * ps;//초기화 되지 않았다.

	cout << animal << " and ";
	cout << bird << "\n";
	//cout << ps << "\n"; // 쓰레기를 출력하거나 먹통이 될 수도 있다.

	cout << "동물의 종류를 입력하십시오: ";
	cin >> animal;
	//cin >>ps; //절대로 해서는 안 될 엄청난 실수이다.
	//ps가 대입된 공간을 지시하고 있지 않다.

	ps = animal;
	cout << ps << "s!\n";
	cout << "strcpy() 사용 전 : \n";
	cout << (int *)animal << ": " << animal << endl;
	cout << (int *)ps << ": " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);//새 메모리에 문자열을 복사
	cout << "strcpy() 사용 후:\n";
	cout << (int *)animal << ": " << animal << endl;
	cout << (int *)ps << ": " << ps << endl;
	delete[]ps;

	return 0;
}