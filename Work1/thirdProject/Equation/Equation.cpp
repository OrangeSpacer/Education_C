#include <iostream>
using namespace std;

int main() {
	int b;
	int c;
	int x;
	cout << "Input b: ";
	cin >> b;
	cout << "Iput c: ";
	cin >> c;
	if (b != 0) {
		x = (-c) / b;
		cout << "Answer: " << x << endl;
	}
	else {
		cout << "Error" << endl;
	}
}