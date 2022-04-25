#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

void func(int n) {  // функция
	if (n != 0) {
		cout << (n > 0 ? 1 : -1);
	}
	else {
		cout << 0;
	}
}

int main() {
	int number;
	cout << "Input number: ";
	cin >> number;
	func(number);  // вызов функции
}
