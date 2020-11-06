#include <iostream>

int main()
{
	using namespace std;
	char food[20] = "carrots";
	strcpy(food, "flan");
	cout << food << endl;

	return 0;
}