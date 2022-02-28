#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float N, i;
    int N1;
    cout << "Input N: ";
    cin >> N;
    if (N > 0) {
        for (i = 1; i <= 10; i++) {
            N = N + 1;
            N1 = N;
            cout << N1 << " ";
        }
    }
    else {
        cout << "Error";
    }
}
