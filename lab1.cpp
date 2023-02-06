#include <iostream>
#include <cmath>
using namespace std;
//2
void summ(float& a, float& b){
    cout << "Result = " << a + b;
    cout << "\n";
}

//5
void not_real(float& a){
    cout.precision(4);
    cout << "Result = " << modf(a, &a);
    cout << "\n";

}

//10
void complex_num(float& a, float& b){
    if (b > 0){
        cout << "Complex number = " << a << ' ' << '+' << ' ' << b << 'i';
    }
    if (b < 0){
        cout << "Complex number = " << a << b << 'i';
    }
    if (b == 0){
        cout << "Complex number = " << a;
    }
}
//13
void square(float& x1, float& y1, float& s, float& a, float& b){
    float x2, x3, x4, y2, y3, y4;//координаты точек
    x2 = x1 + s;
    y2 = y1;
    x3 = x2;
    y3 = y2 - s;
    x4 = x1;
    y4 = y3;
    cout << "Coordinates before shift\n";
    cout << "Coordinates of the first point (upper left corner) -" << '(' << x1 << ',' << ' ' << y1 << ")\n";
    cout << "Coordinates of the second point (upper right corner) -" << '(' << x2 << ',' << ' ' << y2 << ")\n";
    cout << "Coordinates of the third point (lower right corner) -" << '(' << x3 << ',' << ' ' << y3 << ")\n";
    cout << "Coordinates of the fourth point (lower left corner) -" << '(' << x4 << ',' << ' ' << y4 << ")\n";

    //вектор аб направлен из правого верхнего угла (точка х2)
    float a1, b1;//координаты вектора
    a1 = a + x2;
    b1 = b + y2;

    x1 = x1 + a1;
    y1 = y1 + b1;
    x2 = x2 + a1;
    y2 = y2 + b1;
    x3 = x3 + a1;
    y3 = y3 + b1;
    x4 = x4 + a1;
    y4 = y4 + b1;

    cout << "\nCoordinates after shift\n";
    cout << "Coordinates of the first point (upper left corner) -" << '(' << x1 << ',' << ' ' << y1 << ")\n";
    cout << "Coordinates of the second point (upper right corner) -" << '(' << x2 << ',' << ' ' << y2 << ")\n";
    cout << "Coordinates of the third point (lower right corner) -" << '(' << x3 << ',' << ' ' << y3 << ")\n";
    cout << "Coordinates of the fourth point (lower left corner) -" << '(' << x4 << ',' << ' ' << y4 << ")\n";
}
