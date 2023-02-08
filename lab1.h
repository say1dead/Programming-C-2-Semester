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
void complex_num_ref(float& a, float& b);

void  complex_num_point(float* a, float* b);

//test complex_num
void test_complex_num();

//13
void square_ref(float& x1, float& y1, float& s, float& a, float& b);

void square_point(float* x1, float* y1, float* s, float* a, float* b, float* x2, float* x3, float* x4, float* y2, float* y3, float* y4);

//test square
void test_square();
#endif //UNTITLED28_LAB1_H
