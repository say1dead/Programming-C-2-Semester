#include <iostream>
#include "lab1.h"


int main(){
    float a, b;
    float c = 0;

    cout << "---FIRST MODULE---\n";
    cout << "\nEnter first number -";
    cin >> a;
    cout << "Enter second number -";
    cin >> b;
    summ_ref(a, b, c);
    cout << "Result = " << c;
    test_summ();

    cout << "\n\n---SECOND MODULE---\n";
    cout << "\nEnter number -";
    cin >> a;
    without_real_point(&a, &b);
    cout << "Result = " << b;
    test_without_real();

    cout << "\n\n---THIRD MODULE---\n";
    cout << "\nEnter Real (Re) number -";
    cin >> a;
    cout << "Enter Imagine (Im) number -";
    cin >> b;
    if (b > 0){
        cout << "Result before = " << a << '+' << b << 'i';
    }
    if (b < 0){
        cout << "Result before = " << a << b << 'i';
    }
    if (b == 0){
        cout << "Result before = " << a;
    }
    complex_num_ref(a, b);
    if (b > 0){
        cout << "\nResult after = " << a << '+' << b << 'i';
    }
    if (b < 0){
        cout << "\nResult after = " << a << b << 'i';
    }
    if (b == 0){
        cout << "\nResult after = " << a;
    }
    test_complex_num();


    cout << "\n\n---FOURTH MODULE---\n";
    float x1, y1, s;
    float x2, x3, x4;
    float y2, y3, y4;
    cout << "\nEnter the coordinates of the upper left corner of the square -";
    cin >> x1 >> y1;
    cout << "Enter side length of a square -";
    cin >> s;
    cout << "Enter the vector coordinates -";
    cin >> a >> b;
    square_point(&x1,  &y1,  &s,  &a,  &b,  &x2, &x3, &x4, &y2, &y3, &y4);
    cout << "\nCoordinates after shift\n";
    cout << "Coordinates of the first point (upper left corner) -" << '(' << x1 << ',' << ' ' << y1 << ")\n";
    cout << "Coordinates of the second point (upper right corner) -" << '(' << x2 << ',' << ' ' << y2 << ")\n";
    cout << "Coordinates of the third point (lower right corner) -" << '(' << x3 << ',' << ' ' << y3 << ")\n";
    cout << "Coordinates of the fourth point (lower left corner) -" << '(' << x4 << ',' << ' ' << y4 << ")\n";
    test_square();
    return 0;
}
