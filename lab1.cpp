#include <iostream>
#include "lab1_class_point.h"
#include "lab1_class_square.h"
using namespace std;

//2
void summ_ref(float& a, float& b, float& c){
    c = a + b;
}

void summ_point(float* a, float* b, float* c){
    *c = *a + *b;
}

//test summ
void test_summ(){
    float a[3] = {2, 582, 121};
    float b[3] = {2, 241, 137};
    float c_ref[3];
    float c_point[3] ;
    summ_ref(a[0], b[0], c_ref[0]);
    summ_ref(a[1], b[1], c_ref[1]);
    summ_ref(a[2], b[2], c_ref[2]);
    summ_point(&a[0], &b[0], &c_point[0]);
    summ_point(&a[1], &b[1], &c_point[1]);
    summ_point(&a[2], &b[2], &c_point[2]);
    if ((c_ref[0] == 4) and (c_point[0] == 4)){
        if ((c_ref[1] == 823) and (c_point[1] == 823)){
            if ((c_ref[2] == 258) and (c_point[2] == 258)){
                cout << "\nTEST FIRST MODULE - FIRST MODULE CORRECT";
            }
            else{
                cout << "\nTEST FIRST MODULE - FIRST MODULE NOT CORRECT";
            }
        }
        else{
            cout << "\nTEST FIRST MODULE - FIRST MODULE NOT CORRECT";
        }
    }
    else{
        cout << "\nTEST FIRST MODULE - FIRST MODULE NOT CORRECT";
    }
}

//5
void without_real_ref(float& a,float& b){
    cout.precision(4);
    b = a - (int) a;
}

void without_real_point(float* a,float* b){
    cout.precision(4);
    *b = *a - int(*a);
}

void test_without_real(){
    float a[3] = {123.123, -56721.321, -0.231};
    float b_ref[3];
    float b_point[3];
    float r = a[1] - 123;
    without_real_ref(a[0], b_ref[0]);
    without_real_ref(a[1], b_ref[1]);
    without_real_ref(a[2], b_ref[2]);
    without_real_point(&a[0], &b_point[0]);
    without_real_point(&a[1], &b_point[1]);
    without_real_point(&a[2], &b_point[2]);
    if ((b_ref[0] == a[0] - int(a[0])) and (b_point[0] == a[0] - int(a[0]))){
        if ((b_ref[1] == a[1] - int(a[1])) and (b_point[1] == a[1] - int(a[1]))){
            if ((b_ref[2] == a[2] - int(a[2])) and (b_point[2] == a[2] - int(a[2]))){
                cout << "\nTEST SECOND MODULE - SECOND MODULE CORRECT";
            }
            else{
                cout << "\nTEST SECOND MODULE - SECOND MODULE NOT CORRECT";
            }
        }
        else{
            cout << "\nTEST SECOND MODULE - SECOND MODULE NOT CORRECT";
        }
    }
    else{
        cout << "\nTEST SECOND MODULE - SECOND MODULE NOT CORRECT";
    }
}

//10

struct complex_ref{
    float real;
    float imagine;
    float imagine_after;
};

void complex_num_ref(complex_ref &num){
    num.imagine_after = -num.imagine;
}

void complex_num_point(complex_ref *num){
    num->imagine_after = -num->imagine;
}


//test complex_num
void test_complex_num(){
    complex_ref t_1;
    complex_ref t_2;
    complex_ref t_3;
    complex_ref t_4;
    t_1.real = 2;
    t_1.imagine = 1;
    t_2.real = 10;
    t_2.imagine = -10;
    t_3.real = 2;
    t_3.imagine = 1;
    t_4.real = 10;
    t_4.imagine = -10;
    complex_num_ref(t_1);
    complex_num_ref(t_2);
    complex_num_point(&t_3);
    complex_num_point(&t_4);
    if ((t_1.imagine_after == -1) and (t_3.imagine_after == -1)){
        if ((t_2.imagine_after == 10) and (t_4.imagine_after == 10)){
            cout << "\nTEST THIRD MODULE - THIRD MODULE CORRECT";
        }
        else{
            cout << "\nTEST THIRD MODULE - THIRD MODULE NOT CORRECT";
        }
    }
    else{
        cout << "\nTEST THIRD MODULE - THIRD MODULE NOT CORRECT";
    }
}
//13
struct square{
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float s;
    float k1;
    float k2;
};

void square_ref(square &pt){
    pt.x2 = pt.x1 + pt.s;
    pt.y2 = pt.y1;
    pt.x3 = pt.x2;
    pt.y3 = pt.y2 - pt.s;
    pt.x4 = pt.x1;
    pt.y4 = pt.y3;

    //вектор аб направлен из правого верхнего угла (точка х2)
    float a1, b1;//координаты вектора
    a1 = pt.k1 + pt.x2;
    b1 = pt.k2 + pt.y2;

    pt.x1 = pt.x1 + a1;
    pt.y1 = pt.y1 + b1;
    pt.x2 = pt.x2 + a1;
    pt.y2 = pt.y2 + b1;
    pt.x3 = pt.x3 + a1;
    pt.y3 = pt.y3 + b1;
    pt.x4 = pt.x4 + a1;
    pt.y4 = pt.y4 + b1;
}

void square_point(square *pt){
    pt->x2 = pt->x1 + pt->s;
    pt->y2 = pt->y1;
    pt->x3 = pt->x2;
    pt->y3 = pt->y2 - pt->s;
    pt->x4 = pt->x1;
    pt->y4 = pt->y3;

    //вектор аб направлен из правого верхнего угла (точка х2)
    float a1, b1;//координаты вектора
    a1 = pt->k1 + pt->x2;
    b1 = pt->k2 + pt->y2;

    pt->x1 = pt->x1 + a1;
    pt->y1 = pt->y1 + b1;
    pt->x2 = pt->x2 + a1;
    pt->y2 = pt->y2 + b1;
    pt->x3 = pt->x3 + a1;
    pt->y3 = pt->y3 + b1;
    pt->x4 = pt->x4 + a1;
    pt->y4 = pt->y4 + b1;
}

//test square
void test_moveByRef() {
    auto actual = new Square(new Point(1, 1), new Point(2, 2));
    auto p = Point(1, 1);
    auto expected = new Square(new Point(2, 2), new Point(3, 3));

    actual->moveByRef(p);

    if ((
           actual->p1->x1 == expected->p1->x1 && actual->p1->y1 == expected->p1->y1 &&
           actual->p2->x1 == expected->p2->y1 && actual->p2->y1 == expected->p2->y1
    )) {
        cout << "\nTEST FOURTH MODULE - FOURTH MODULE CORRECT";
    }
    else{
        cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
    }
}

void start(){
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
        test_moveByRef();
};
