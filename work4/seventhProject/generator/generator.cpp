#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int s0, m, b, c, s1, count;

    cout << "Start number:";
    cin >> s0;
    cout << "Input m: ";
    cin >> m;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    cout << "End number s1: ";
    cin >> s1;

    for (int i = 0; i < s1; i++) {
        s0 = ((m * s0 + b)) % c;
        cout << s0 << endl;
    }
}
