#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double S, m, n, p, r, m1;
    cout << "Input S: ";
    cin >> S;
    cout << "Input m: ";
    cin >> m;
    cout << "Input n: ";
    cin >> n;
    
    m1 = 0;
    for (p = 1; m1 < m; p++)
    {
        r = p / 100;
        m1 = ((S * r * pow(1+r,n)) / (12 * (pow(1+r,n)-1)));
        if (m1 > m) {
            cout << "Answe p: " << p << "%" << endl;
        }
        else {
            cout << "Error" << endl;
        }
    }
}