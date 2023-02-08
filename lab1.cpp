#include <iostream>
#include <cmath>
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
    float a = 2;
    float b = 3;
    float c_ref;
    float c_point ;
    summ_ref(a, b, c_ref);
    summ_point(&a, &b, &c_point);
    if ((c_ref == 5) and (c_point == 5)){
        cout << "\nTEST FIRST MODULE - FIRST MODULE CORRECT";
    }
    else{
        cout << "\nTEST FIRST MODULE - FIRST MODULE NOT CORRECT";
    }
}

//5
void without_real_ref(float& a,float& b){
    cout.precision(4);
    b = modf(a, &a);
}

void without_real_point(float* a,float* b){
    cout.precision(4);
    *b = modf(*a, a);
}

void test_without_real(){
    float a = 123.123;
    float a_b = a;
    float r = a - 123;
    float b_ref;
    float b_point;
    without_real_ref(a, b_ref);
    without_real_point(&a_b, &b_point);
    if ((b_ref == r) and (b_point == r)){
        cout << "\nTEST SECOND MODULE - SECOND MODULE CORRECT";
    }
    else{
        cout << "\nTEST SECOND MODULE - SECOND MODULE NOT CORRECT";
    }
}

//10
void complex_num_ref(float& a, float& b){//a - re, b - im
    b = -b;
}

void  complex_num_point(float* a, float* b){
    *b = -*b;
}

//test complex_num
void test_complex_num(){
    float a = 2;
    float b = -1;
    complex_num_ref(a, b);
    float b_rev = -1;
    complex_num_point(&a, &b_rev);
    if ((b == 1) and (b_rev == 1)){
        cout << "\nTEST THIRD MODULE - THIRD MODULE CORRECT";
    }
    else{
        cout << "\nTEST THIRD MODULE - THIRD MODULE NOT CORRECT";
    }
}

//13
void square_ref(float& x1, float& y1, float& s, float& a, float& b, float& x2, float& x3, float&x4, float& y2, float& y3, float& y4){
    x2 = x1 + s;
    y2 = y1;
    x3 = x2;
    y3 = y2 - s;
    x4 = x1;
    y4 = y3;
    
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
}

void square_point(float* x1, float* y1, float* s, float* a, float* b, float* x2, float* x3, float* x4, float* y2, float* y3, float* y4){
    *x2 = *x1 + *s;
    *y2 = *y1;
    *x3 = *x2;
    *y3 = *y2 - *s;
    *x4 = *x1;
    *y4 = *y3;

    //вектор аб направлен из правого верхнего угла (точка х2)
    float a1, b1;//координаты вектора
    a1 = *a + *x2;
    b1 = *b + *y2;

    *x1 = *x1 + a1;
    *y1 = *y1 + b1;
    *x2 = *x2 + a1;
    *y2 = *y2 + b1;
    *x3 = *x3 + a1;
    *y3 = *y3 + b1;
    *x4 = *x4 + a1;
    *y4 = *y4 + b1;
}

//test square
void test_square(){
    float x1 = 5;
    float y1 = 5;
    float s = 5;
    float a = 5;
    float b = 5;
    float x2, x3, x4;
    float y2, y3, y4;
    square_ref(x1, y1, s, a, b, x2, x3, x4, y2, y3, y4);
    float x1_t = x1;
    float y1_t = y1;
    float x2_t = x2;
    float x3_t = x3;
    float x4_t = x4;
    float y2_t = y2;
    float y3_t = y3;
    float y4_t = y4;
    square_point(&x1, &y1, &s, &a, &b, &x2, &x3, &x4, &y2, &y3, &y4);
    if ((x1 == 20) and (x1_t == 20) and (y1 == 15) and (y1_t == 15) and (x2 == 25) and (x2_t == 25) and (y2 == 15) and (y2_t == 15) and (x3 == 25) and (x3_t == 25) and (y3 == 10) and (y3_t == 10) and (x4 == 20) and (x4_t == 20) and (y4 == 10) and (y4_t == 10)){
        cout << "\nTEST FOURTH MODULE - FOURTH MODULE CORRECT";
    }
    else{
        cout << "\nTEST FOURTH MODULE - FOURTH MODULE CORRECT";
    }
}

