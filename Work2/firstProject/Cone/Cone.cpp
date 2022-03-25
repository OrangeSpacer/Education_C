#include <iostream>
using namespace std;

int main(){
    float h, r, R, l;/*Перед тем как показывать код преподу измените название всех переменных и текст при выводе*/
    cout << "Input r:";
    cin >> r;
    cout << "Input h: ";
    cin >> h;
    cout << "Input R: ";
    cin >> R;

    if ((h > 0) && (r > 0) && (R > 0)) {
        l = sqrt((R - r) * (R - r) + h * h);
        float V = (1.0 / 3.0) * 3.14 * h * (R * R + R * r + r * r);
        float S = 3.14 * (R * R + (R + r) * l + r * r);
        cout << "The volume of the cone is equal to: " << V << endl << "The total surface of the cone is equal to: " << S;
    }
    else {
        cout << "Eror";
    }
}
