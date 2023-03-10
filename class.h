//
// Created by kochu on 09.03.2023.
//
#ifndef LAB3_PROGA_CLASS_H
#define LAB3_PROGA_CLASS_H
#include <iostream>
#include "main.h"
using namespace std;

class App{
public:
    void Start(){
        cout << "---Multiplications 2 matrix---\n";//1---------------------------

        int m_1_a, n_1_a;
        cout << "\nEnter the size of the first matrix, line and column -";
        cin >> m_1_a >> n_1_a;

        int a_b_1[m_1_a][n_1_a];
        cout << "Enter first matrix :\n";
        for (int i = 0; i < m_1_a; i++){
            for (int j = 0; j < n_1_a; j++){
                cin >> a_b_1[i][j];
            }
        }
        int *a_1[m_1_a];
        for (int i = 0; i < m_1_a; i++){
            a_1[i] = a_b_1[i];
        }

        int m_1_b, n_1_b;
        cout << "Enter the size of the second matrix, line and column -";
        cin >> m_1_b >> n_1_b;
        int b_b_1[m_1_b][m_1_b];
        if (n_1_a != m_1_b){
            cout << "Error - the number of columns of the first matrix must be equal to the number of rows of the second matrix";
        }
        cout << "Enter second matrix :\n";
        for (int i = 0; i < m_1_b; i++){
            for (int j = 0; j < n_1_b; j++){
                cin >> b_b_1[i][j];
            }
        }
        int *b_1[m_1_b];
        for (int i = 0; i < m_1_b; i++){
            b_1[i] = b_b_1[i];
        }
        matrix_multiplication(a_1, b_1, m_1_a, n_1_a, m_1_b, n_1_b);

        cout << "---Multiplications matrix and float number---\n";//2---------------------------

        cout << "\nEnter the size of the first matrix, line and column -";
        int m_2_a, n_2_a;
        cin >> m_2_a >> n_2_a;
        float a_b_2[m_2_a][n_2_a];
        cout << "Enter matrix :\n";
        for (int i = 0; i < m_2_a; i++){
            for (int j = 0; j < n_2_a; j++){
                cin >> a_b_2[i][j];
            }
        }
        float *a_2[m_2_a];
        for (int i = 0; i < m_2_a; i++){
            a_2[i] = a_b_2[i];
        }
        float x;
        cout << "Enter float number -";
        cin >> x;
        cout << "\n";
        matrix_multi_float(a_2, x, m_2_a, n_2_a);

        cout << "\nSubtraction and addition\n";//3---------------------------

        int m_3_a, n_3_a;
        cout << "\nNote: if you want to add or subtract two matrices - they must have the same dimensions\n";
        cout << "\nEnter the size of the matrix, line and column -";
        cin >> m_3_a >> n_3_a;

        int a_b_3[m_3_a][n_3_a];
        cout << "Enter first matrix :\n";
        for (int i = 0; i < m_3_a; i++){
            for (int j = 0; j < n_3_a; j++){
                cin >> a_b_3[i][j];
            }
        }
        int *a_3[m_3_a];
        for (int i = 0; i < m_3_a; i++){
            a_3[i] = a_b_3[i];
        }
        int b_b_3[m_3_a][n_3_a];
        cout << "Enter second matrix :\n";
        for (int i = 0; i < m_3_a; i++){
            for (int j = 0; j < n_3_a; j++){
                cin >> b_b_3[i][j];
            }
        }
        int *b_3[m_3_a];
        for (int i = 0; i < m_3_a; i++){
            b_3[i] = b_b_3[i];
        }
        subtraction_and_addition(a_3, b_3, m_3_a, n_3_a);

        cout << "---Comprasion---\n";//4---------------------------

        int m_4_a, n_4_a;
        cout << "\nEnter the size of the matrix, line and column -";
        cin >> m_4_a >> n_4_a;

        int a_b_4[m_4_a][n_4_a];
        cout << "Enter first matrix :\n";
        for (int i = 0; i < m_4_a; i++){
            for (int j = 0; j < n_4_a; j++){
                cin >> a_b_4[i][j];
            }
        }
        int *a_4[m_4_a];
        for (int i = 0; i < m_4_a; i++){
            a_4[i] = a_b_4[i];
        }

        int m_4_b, n_4_b;
        cout << "\nEnter the size of the matrix, line and column -";
        cin >> m_4_b >> n_4_b;
        int b_b_4[m_4_b][n_4_b];
        cout << "Enter second matrix :\n";
        for (int i = 0; i < m_4_a; i++){
            for (int j = 0; j < n_4_a; j++){
                cin >> b_b_3[i][j];
            }
        }
        int *b_4[m_4_a];
        for (int i = 0; i < m_4_a; i++){
            b_4[i] = b_b_4[i];
        }
        comparison(a_4, b_4, m_4_a, n_4_a, m_4_b, n_4_b);
    }
};

#endif //LAB3_PROGA_CLASS_H
