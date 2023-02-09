//
// Created by kochu on 06.02.2023.
//

#ifndef UNTITLED28_LAB1_H
#define UNTITLED28_LAB1_H
#include <iostream>
using namespace std;

//2
void summ_ref(float& a, float& b, float& c);

void summ_point(float* a, float* b, float* c);

//test summ
void test_summ();

//5
void without_real_ref(float& a, float& b);

void without_real_point(float* a,float* b);

//test without_real
void test_without_real();

//10
struct complex_ref{
    float real;
    float imagine;
    float imagine_after;
};

void complex_num_ref(complex_ref &num);

void complex_num_point(complex_ref *num);

//test complex_num
void test_complex_num();

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
void square_ref(square &pt);

void square_point(square *pt);

//test square
void test_square();
#endif //UNTITLED28_LAB1_H
