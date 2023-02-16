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
void test_square(){
    square t_1;
    square t_2;
    t_1.x1 = 5;
    t_1.y1 = 5;
    t_2.x1 = 5;
    t_2.y1 = 5;
    t_1.s = 5;
    t_2.s = 5;
    t_1.k1 = 5;
    t_2.k1 = 5;
    t_1.k2 = 5;
    t_2.k2 = 5;
    square_ref(t_1);
    square_point(&t_2);
    square t_3;
    square t_4;
    t_3.x1 = 3;
    t_3.y1 = 3;
    t_4.x1 = 3;
    t_4.y1 = 3;
    t_3.s = 3;
    t_4.s = 3;
    t_3.k1 = 3;
    t_4.k1 = 3;
    t_3.k2 = 3;
    t_4.k2 = 3;
    square_ref(t_3);
    square_point(&t_4);
    if ((t_1.x1 == 20) and (t_1.x2 == 25) and (t_1.x3 == 25) and (t_1.x4 == 20)){
        if ((t_2.x1 == 20) and (t_2.x2 == 25) and (t_2.x3 == 25) and (t_2.x4 == 20)){
            if ((t_1.y1 == 15) and (t_1.y2 == 15) and (t_1.y3 == 10) and (t_1.y4 == 10)){
                if ((t_2.y1 == 15) and (t_2.y2 == 15) and (t_2.y3 == 10) and (t_2.y4 == 10)){//конец первого кейса
                    if ((t_3.x1 == 12) and (t_3.x2 == 15) and (t_3.x3 == 15) and (t_3.x4 == 12)){
                        if ((t_4.x1 == 12) and (t_4.x2 == 15) and (t_4.x3 == 15) and (t_4.x4 == 12)){
                            if ((t_3.y1 == 9) and (t_3.y2 == 9) and (t_3.y3 == 6) and (t_3.y4 == 6)){
                                if ((t_4.y1 == 9) and (t_4.y2 == 9) and (t_4.y3 == 6) and (t_4.y4 == 6)){
                                    cout << "\nTEST FOURTH MODULE - FOURTH MODULE CORRECT";
                                }
                                else{
                                    cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
                                }
                            }
                            else{
                                cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
                            }
                        }
                        else{
                            cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
                        }
                    }
                    else{
                        cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
                    }
                }
                else{
                    cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
                }
            }
            else{
                cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
            }
        }
        else{
            cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
        }
    }
    else{
        cout << "\nTEST FOURTH MODULE - FOURTH MODULE NOT CORRECT";
    }
}