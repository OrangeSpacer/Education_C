#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	cout << "Input a" << endl;
	cin >> a;
	cout << "Input b" << endl;
	cin >> b;
	cout << "Input с" << endl;
	cin >> c;
	if ((a != 0 && b != 0) || (a!=0) {
		if (((b * b) - (4 * a * c)) > 0) {
			int x1;
			int x2;
			x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
			cout << "Answer x1: " << x1 << endl;
			x2 = (-b - sqrt((b * b) - (4 * a * c))) / 2 * a;
			cout << "Answer x2 " << x2 << endl;
		}
		if (((b * b) - (4 * a * c)) == 0) {
			int x1;
			x1 = -b / 2 * a;
			cout << "Answer x1: " << x1 << endl;
		}
		if (((b * b) - (4 * a * c)) < 0) {
			cout << "There are no solutions" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
}