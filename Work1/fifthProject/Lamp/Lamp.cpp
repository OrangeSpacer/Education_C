#include <iostream>
using namespace std;

int main() {
	bool Lamp, Curtains, timeDay;
	cout << "Input meaning Lamp: ";
	cin >> Lamp;
	cout << "Input meaning Curtains: ";
	cin >> Curtains;
	cout << "Input meaning timeDay: ";
	cin >> timeDay;

	if ((timeDay == true && Curtains == false) || (Lamp == true)) {
		cout << "Light" << endl;
	}
	else {
		cout << "Dark" << endl;
	}

}