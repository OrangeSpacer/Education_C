#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float x, y, b,z;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Input b: ";
	cin >> b;

	if ((b - y > 0) && (b - x >= 0)) {
		z = log(b - y) * sqrt(b - x);
		cout << "Answer z: " << z; 
	}
	else {
		cout << "Error" << endl;
	}
}

