#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int * pt = &higgens;

	cout << "higgens�� �� = " << higgens << ", higgends�� �ּ� = " << &higgens << endl;
	cout << "*pt�� �� = " << *pt << ", pt�� �� = " << pt << endl;


	return 0;
}