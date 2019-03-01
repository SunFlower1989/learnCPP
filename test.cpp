#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, surname;
	cout <<"give me your name and surname" << endl;
	cin >> name >> surname;
	cin.ignore(10000,'\n');

	int age;
	cout <<"give your age" << endl;
	cin >> age;
	cin.ignore(10000,'\n');

	return 0;
}