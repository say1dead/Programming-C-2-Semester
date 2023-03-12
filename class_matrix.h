//
// Created by kochu on 09.03.2023.
//
#ifndef LAB3_PROGA_CLASS_MATRIX_H
#define LAB3_PROGA_CLASS_MATRIX_H
#include <iostream>
#include "main.h"
using namespace std;

class Matrix{
public:
    void Start_Matrix(){
        cout << "---Multiplications 2 matrix---\n";//1---------------------------

        int a_a_1[3][3];
        cout << "Enter first matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> a_a_1[i][j];
            }
        }
        int *a_1[3];
        for (int i = 0; i < 3; i++){
            a_1[i] = a_a_1[i];
        }

        int b_b_1[3][3];
        cout << "Enter second matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> b_b_1[i][j];
            }
        }
        int *b_1[3];
        for (int i = 0; i < 3; i++){
            b_1[i] = b_b_1[i];
        }
        matrix_multiplication(a_1, b_1);

        cout << "---Multiplications matrix and float number---\n";//2---------------------------

        float a_a_2[3][3];
        cout << "Enter matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> a_a_2[i][j];
            }
        }
        float *a_2[3];
        for (int i = 0; i < 3; i++){
            a_2[i] = a_a_2[i];
        }
        float x;
        cout << "Enter float number -";
        cin >> x;
        cout << "\n";
        matrix_multi_float(a_2, x);

        cout << "\nSubtraction and addition\n";//3---------------------------

        int a_b_3[3][3];
        cout << "Enter first matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> a_b_3[i][j];
            }
        }
        int *a_3[3];
        for (int i = 0; i < 3; i++){
            a_3[i] = a_b_3[i];
        }
        int b_b_3[3][3];
        cout << "Enter second matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> b_b_3[i][j];
            }
        }
        int *b_3[3];
        for (int i = 0; i < 3; i++){
            b_3[i] = b_b_3[i];
        }
        subtraction_and_addition(a_3, b_3);

        cout << "---Comprasion---\n";//4---------------------------

        int a_a_4[3][3];
        cout << "Enter first matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> a_a_4[i][j];
            }
        }
        int *a_4[3];
        for (int i = 0; i < 3; i++){
            a_4[i] = a_a_4[i];
        }

        int b_b_4[3][3];
        cout << "Enter second matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> b_b_4[i][j];
            }
        }
        int *b_4[3];
        for (int i = 0; i < 3; i++){
            b_4[i] = b_b_4[i];
        }
        comparison(a_4, b_4);
    }
};

#endif //LAB3_PROGA_CLASS_MATRIX_H
