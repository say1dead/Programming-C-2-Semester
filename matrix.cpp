//
// Created by kochu on 09.03.2023.
//
#include <iostream>
using namespace std;

void matrix_multiplication(int *a[], int *b[]){
    int c[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0 ; j < 3; j++){
            c[i][j] = 0;
            for (int k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_multi_float(float *a[], float x){
    float c[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = 0;
            c[i][j] += a[i][j] * x;
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}

void subtraction_and_addition(int *a[], int *b[]){
    int c_1[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c_1[i][j] = 0;
            c_1[i][j] += a[i][j] + b[i][j];
        }
    }

    int c_2[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c_2[i][j] = 0;
            c_2[i][j] += a[i][j] - b[i][j];
        }
    }

    cout << "\nAddition matrix\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << c_1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSubtraction matrix\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << c_2[i][j] << "\t";
        }
        cout << endl;
    }
}

void comparison(int *a[], int *b[]){
    int det_a = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1] -
            a[0][2] * a[1][1] * a[2][0] - a[0][1] * a[1][0] * a[2][2] - a[0][0] * a[1][2] * a[2][1];

    int det_b = b[0][0] * b[1][1] * b[2][2] + b[0][1] * b[1][2] * b[2][0] + b[0][2] * b[1][0] * b[2][1] -
            b[0][2] * b[1][1] * b[2][0] - b[0][1] * b[1][0] * b[2][2] - b[0][0] * b[1][2] * b[2][1];
    int det = det_a - det_b;

    if (det > 0){
        cout << "\nMatrix A > Matrix B\n";
    }
    if (det < 0){
        cout << "\nMatrix B > Matrix A\n";
    }
    if (det == 0){
        cout << "\nMatrix A == Matrix B\n";
    }
}
