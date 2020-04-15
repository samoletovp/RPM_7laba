/**
*
* @file menu.hpp
* @author Samoletov Petr <samoletovp@gmail.com>
* @brief Создание очереди одного из трёх типов
*
*/
#ifndef INC_7_2_MENU_HPP
#define INC_7_2_MENU_HPP

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "queue_int.hpp"
#include "queue_double.hpp"
#include "queue_string.hpp"

using namespace std;

int menu() {
    cout << "Press 1 to create a queue of type int" << endl;
    cout << "Press 2 to create a queue of type double" << endl;
    cout << "Press 3 to create a queue of type string" << endl;
    int a;
    cin >> a;
    switch (a) {
        case 1: {
            queue_int();
            break;
        }
        case 2: {
            queue_double();
            break;
        }
        case 3: {
            queue_string();
            break;
        }
        default:
            break;
    }
return 0;
}
#endif //INC_7_2_MENU_HPP
