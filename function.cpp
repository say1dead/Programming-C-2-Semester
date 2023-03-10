//
// Created by kochu on 09.03.2023.
//
#include <iostream>
using namespace std;

void matrix_multiplication(int *a[], int *b[], int m1, int n1, int m2, int n2){
    int c[m1][n2];
    for (int i = 0; i < m1; i++){
        for (int j = 0 ; j < n2; j++){
            c[i][j] = 0;
            for (int k = 0; k < m2; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n2; j++){
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_multi_float(float *a[], float x, int m, int n){
    float c[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = 0;
            c[i][j] += a[i][j] * x;
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}

void subtraction_and_addition(int *a[], int *b[], int m_3_a, int n_3_a){
    int c_1[m_3_a][n_3_a];
    for (int i = 0; i < m_3_a; i++){
        for (int j = 0; j < n_3_a; j++){
            c_1[i][j] = 0;
            c_1[i][j] += a[i][j] + b[i][j];
        }
    }

    int c_2[m_3_a][n_3_a];
    for (int i = 0; i < m_3_a; i++){
        for (int j = 0; j < n_3_a; j++){
            c_2[i][j] = 0;
            c_2[i][j] += a[i][j] - b[i][j];
        }
    }

    cout << "\nAddition matrix\n";
    for (int i = 0; i < m_3_a; i++){
        for (int j = 0; j < n_3_a; j++){
            cout << c_1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSubtraction matrix\n";
    for (int i = 0; i < m_3_a; i++){
        for (int j = 0; j < n_3_a; j++){
            cout << c_2[i][j] << "\t";
        }
        cout << endl;
    }
}

void comparison(int *a[], int *b[], int m_4_a, int n_4_a, int m_4_b, int n_4_b){
    int s_a = m_4_a * n_4_a;
    int s_b = m_4_b * n_4_b;
    if (s_a - s_b > 0){
        cout << "\nMatrix A is larger than matrix B by " << s_a - s_b;
    }
    if (s_a - s_b < 0){
        cout << "\nMatrix B is larger than matrix A by " << abs(s_a - s_b);
    }
    if (s_a - s_b == 0){
        cout << "\nMatrices A and B are the same size";
    }
}
