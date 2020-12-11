#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;

	cout << "Nhap 2 so can +: ";
	cin >> a >> b;

	cout << a << " + " << b << " = " << sum(a, b) << endl;

	system("pause");
}