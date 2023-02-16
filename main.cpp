#include <iostream>
#include "lab1.h"
using namespace std;

int main(){
    cout << "---FIRST MODULE---\n";
    float a, b;
    float c = 0;

    cout << "\nEnter first number -";
    cin >> a;
    cout << "Enter second number -";
    cin >> b;
    summ_ref(a, b, c);
    cout << "Result = " << c;
    test_summ();

    cout << "\n\n---SECOND MODULE---\n";
    float a2, b2;
    cout << "\nEnter number -";
    cin >> a2;
    without_real_point(&a2, &b2);
    cout << "Result = " << b2;
    test_without_real();

    cout << "\n\n---THIRD MODULE---\n";
    complex_ref num;
    cout << "\nEnter Real (Re) number -";
    cin >> num.real;
    cout << "Enter Imagine (Im) number -";
    cin >> num.imagine;
    if (num.imagine > 0){
        cout << "Result before = " << num.real << '+' << num.imagine << 'i';
    }
    if (num.imagine < 0){
        cout << "Result before = " << num.real << num.imagine << 'i';
    }
    if (num.imagine == 0){
        cout << "Result before = " << num.real;
    }
    num.imagine_after= 0;
    complex_num_ref(num);
    if (num.imagine_after > 0){
        cout << "\nResult after = " << num.real << '+' << num.imagine_after << 'i';
    }
    if (num.imagine_after < 0){
        cout << "\nResult after = " << num.real << num.imagine_after << 'i';
    }
    if (num.imagine_after == 0){
        cout << "\nResult after = " << num.real;
    }
    test_complex_num();


    cout << "\n\n---FOURTH MODULE---\n";
    square pt;
    cout << "\nEnter the coordinates of the upper left corner of the square -";
    cin >> pt.x1 >> pt.y1;
    cout << "Enter side length of a square -";
    cin >> pt.s;
    cout << "Enter the vector coordinates -";
    cin >> pt.k1 >> pt.k2;
    square_ref(pt);
    cout << "\nCoordinates after shift\n";
    cout << "Coordinates of the first point (upper left corner) -" << '(' << pt.x1 << ',' << ' ' << pt.y1 << ")\n";
    cout << "Coordinates of the second point (upper right corner) -" << '(' << pt.x2 << ',' << ' ' << pt.y2 << ")\n";
    cout << "Coordinates of the third point (lower right corner) -" << '(' << pt.x3 << ',' << ' ' << pt.y3 << ")\n";
    cout << "Coordinates of the fourth point (lower left corner) -" << '(' << pt.x4 << ',' << ' ' << pt.y4 << ")\n";
    test_square();
    return 0;
}
