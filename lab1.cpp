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

struct complex_ref{
    float real;
    float imagine;
    float imagine_after;
};

void complex_num_ref(complex_ref &num){//a - re, b - im
    num.imagine_after = -num.imagine;
}

void complex_num_point(complex_ref *num){
    num->imagine_after = -num->imagine;
}


//test complex_num
void test_complex_num(){
    complex_ref t_1;
    t_1.real = 2;
    t_1.imagine = 1;
    complex_num_ref(t_1);
    complex_ref t_2;
    t_2.real = 2;
    t_2.imagine = 1;
    complex_num_point(&t_2);
    if ((t_1.imagine_after == -1) and (t_2.imagine_after == -1)){
        cout << "\nTEST THIRD MODULE - THIRD MODULE CORRECT";
    }
    else{
        cout << "\nTEST THIRD MODULE - THIRD MODULE NOT CORRECT";
    }
}
//13
struct square{
    float x1;
    float x2;
    float x3;
    float x4;
    float y1;
    float y2;
    float y3;
    float y4;
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
void test_square(){
    square t_1;
    t_1.x1 = 5;
    t_1.y1 = 5;
    t_1.s = 5;
    t_1.k1 = 5;
    t_1.k2 = 5;
    square_ref(t_1);
    square t_2;
    t_2.x1 = t_1.x1;
    t_2.y1 = t_1.y1;
    t_2.x2 = t_1.x2;
    t_2.x3 = t_1.x3;
    t_2.x4 = t_1.x4;
    t_2.y2 = t_1.y2;
    t_2.y3 = t_1.y3;
    t_2.y4 = t_1.y4;
    square_point(&t_2);
    if ((t_1.x1 == 20) and (t_2.x1 == 20) and (t_1.x2 == 25) and (t_2.x2 == 25) and (t_1.x3 == 25) and (t_2.x3 == 25) and (t_1.x4 == 20) and (t_2.x4 == 20)){
        if((t_1.y1 == 15) and (t_2.y1 == 15) and (t_1.y2 == 15) and (t_2.y2 == 15) and (t_1.y3 == 10) and (t_2.y3 == 10) and (t_1.y4 == 10) and (t_2.y4 == 10)){
            cout << "\nTEST FOURTH MODULE -  FOURTH MODULE CORRECT";
        }
    }
    else{
        cout << "\nTEST FOURTH MODULE - FOURTH MODULE CORRECT";
    }
}
