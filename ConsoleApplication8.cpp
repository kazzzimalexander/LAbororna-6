#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	float dob = 1;
	cout << "Введіть х:";
	cin >> x;
	for (int n = 1; n < 6; n++) {
		dob = dob * tan(n * x);
	}
	cout << dob;
}

