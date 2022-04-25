#include <iostream>
#include <cmath>
using namespace std;

void squareRectangle(float a, float b) {
    if (a > 0 && b > 0) {
        float square = a * b;
        cout << "The area is equal to = " << square << endl;
    }
    else {
        cout << "Error";
    }
}

void squareTriangle(float x, float h) {
    if (x > 0 && h > 0) {
        float square = 0.5 * x * h;
        cout <<  "The area is equal to = " << square << endl;
    }
    else {
        cout << "Error";
    }
}

void squareCircle(float r) {
    if (r > 0 ) {
        float square = 3.14 * (r*r);
        cout << "The area is equal to = " <<  square << endl;
    }
    else {
        cout << "Error";
    }
}


int main()
{
    int number;
    cout << "To calculate the area of the rectangle, enter 1" << endl;
    cout << "******************" << endl;
    cout << "To calculate the area of the triangle, enter 2" << endl;
    cout << "******************" << endl;
    cout << "To calculate the area of the circle, enter 3" << endl;
    cout << "******************" << endl;
    cout << "To calculate the area of all shapes, enter 123" << endl;
    cout << "******************" << endl;
    cout << "Your number: ";
    cin >> number;
    if (number == 1) {
        float a, b;
        cout << "The area of the rectangle is calculated" << endl;
        cout << "Input a:";
        cin >> a;
        cout << "Input b: ";
        cin >> b;
        squareRectangle(a, b);
    }
    if (number == 2) {
        float x, h;
        cout << "The area of the triangle is calculated" << endl;
        cout << "Input a:";
        cin >> x;
        cout << "Input h: ";
        cin >> h;
        squareTriangle(x, h);
    }
    if (number == 3) {
        float r;
        cout << "The area of the triangle is circle" << endl;
        cout << "Input r:";
        cin >> r;
        squareCircle(r);
    }
    if (number == 123) {
        float a,b,x,h,r;
        cout << "The area of the triangle is rectangle" << endl;
        cout << "Enter the side of the rectangle: ";
        cin >> a;
        cout << "Enter another side of the rectangle: ";
        cin >> b;
        squareRectangle(a, b);
        cout << "The area of the triangle is triangle" << endl;
        cout << "Enter the side of the triangle: ";
        cin >> x;
        cout << "Enter the height of the triangle: ";
        cin >> h;
        squareTriangle(x, h);
        cout << "The area of the triangle is circle" << endl;
        cout << "Enter the radius of the circle: ";
        cin >> r;
        squareCircle(r);
    }   
}

