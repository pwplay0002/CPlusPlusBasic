#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int * pt = &higgens;

	cout << "higgens의 값 = " << higgens << ", higgends의 주소 = " << &higgens << endl;
	cout << "*pt의 값 = " << *pt << ", pt의 값 = " << pt << endl;


	return 0;
}