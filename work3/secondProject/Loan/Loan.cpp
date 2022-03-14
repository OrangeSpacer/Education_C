#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float S, p, n, r, m;
	cout << "Input S: ";
	cin >> S;
	cout << "Input p: ";
	cin >> p;
	cout << "Input n: ";
	cin >> n;

	r = p / 100;
	
	if ((pow((1 + r), n) - 1) != 0) {
		m = (S * r * (pow((1 + r), n))) / (12 * (pow((1 + r), n)));
		cout << "Answer m: " << m;
	}
}

