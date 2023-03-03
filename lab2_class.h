//
// Created by kochu on 25.02.2023.
//

#ifndef UNTITLED29_LAB2_CLASS_H
#define UNTITLED29_LAB2_CLASS_H
#include "lab2_h.h"
#include <locale>


class App{
public:
    int Start(){
        string name;
        cout << "Enter file name -";
        cin >> name;
        cout << "\nThis program can:\n1. Open file.\n2. Close file\n";
        cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
        cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
        cout << "\nWhat to do -";
        int k_i;
        while (cin >> k_i){
            if (k_i == 1){
                open(name);
                cout << "\n== Status file - File is open ==\n";
                k_i = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";
            }
            if (k_i == 2){
                close(name);
                k_i = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";
            }
            if (k_i == 3){
                check(name);
                k_i = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";
            }
            if (k_i == 4) {
                namefile(name);
                k_i = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";
            }
            if (k_i == 5){
                cout << "\nEnter string -";
                string str;
                cin >> str;
                add_string(name, str);
                k_i = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";
            }
            if (k_i == 6){
                int num;
                cout << "\nEnter integer number -";
                cin >> num;
                add_int(name, num);
                k_i = 0;
                num = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";
            }
            if (k_i == 7){
                float num;
                cout << "\nEnter float number -";
                cin >> num;
                add_float(name, num);
                k_i = 0;
                num = 0;
                cout << "\n1. Open file.\n2. Close file\n";
                cout << "3. Check if file is open.\n4. Display the name of the working file.\n";
                cout << "5. Add your string in file.\n6. Add integer number in file.\n7. Add float number in file.\n8. Stop.\n";
                cout << "\nWhat to do -";

            }
            if (k_i == 8){
                close(name);
                return 0;
            }
        }
    };
};

#endif //UNTITLED29_LAB2_CLASS_H
