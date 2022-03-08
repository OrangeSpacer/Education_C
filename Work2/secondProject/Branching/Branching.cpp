#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, x, w;
    cout << "Input a: ";
    cin >> a;
    cout << "Input x: ";
    cin >> x;

    if (abs(x) < 1){
        if (x != 0) {
            w = a * log(abs(x));
            cout << "Answer w: " << w << endl;
        }
        else {
            cout << "Math Error" << endl;
        }
    }
    else {
        if (x*x <= a) {
            w = sqrt(a - (x * x));
            cout << "Answer w: " << w <<  endl;
        }
        else {
            cout << "SQRT Error" << endl;
        }
    }
}
