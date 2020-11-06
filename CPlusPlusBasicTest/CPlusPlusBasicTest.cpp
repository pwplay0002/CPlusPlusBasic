#include <iostream>
#include <string>

struct torgle_register
{
	unsigned int SN : 4;
	unsigned int SN1 : 4;
	//unsigned int : 4;
	//unsigned int abc;
	//bool goodIn : 1;
	//bool goodTorgle : 1;
	//bool goodTorgle2 : 1;
	//bool goodTorgle3 : 1;
};

int main()
{
	using namespace std;
	torgle_register a;
	cout << sizeof(a) << endl;
	
	int arr[20];

	cout << sizeof(arr) << endl;
	return 0;
}
