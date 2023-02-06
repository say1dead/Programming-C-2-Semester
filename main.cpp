#include <iostream>
#include "lab1.h"


int main(){
    float a, b;

    cout << "---FIRST MODULE---\n";
    cout << "\nEnter first number -";
    cin >> a;
    cout << "Enter second number -";
    cin >> b;
    summ(a, b);

    cout << "\n---SECOND MODULE---\n";
    cout << "\nEnter number -";
    cin >> a;
    not_real(a);

    cout << "\n---THIRD MODULE---\n";
    cout << "\nEnter Real (Re) number -";
    cin >> a;
    cout << "Enter Imagine (Im) number -";
    cin >> b;
    complex_num(a, b);
    cout << "\nEnter what you want to change - ";
    cin >> b;
    complex_num(a, b);
    cout << "\n";

    cout << "\n---FOURTH MODULE---\n";
    float x1, y1, s;
    cout << "\nEnter the coordinates of the upper left corner of the square -";
    cin >> x1 >> y1;
    cout << "Enter side length of a square -";
    cin >> s;
    cout << "\n";
    cout << "Enter the vector coordinates -";
    cin >> a >> b;
    cout << "\n";
    square(x1, y1, s, a, b);
    return 0;
}
