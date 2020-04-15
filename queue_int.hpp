/**
*
* @file queue_int.hpp
* @author Samoletov Petr <samoletovp@gmail.com>
* @brief Работа с очередью типа int
*
*/
#ifndef INC_7_2_QUEUE_INT_HPP
#define INC_7_2_QUEUE_INT_HPP

#include "iostream"
#include "queue.hpp"

void queue_int() {
    auto *i = new Queue<int>();
    bool quit=false;
    while (!quit) {
        std::cout << "Press 1 to add an element to the queue" << std::endl;
        std::cout << "Press 2 to remove an element from the queue" << std::endl;
        std::cout << "Press 3 to show the queue" << std::endl;
        std::cout << "Press 4 to see the queue's size" << std::endl;
        std::cout << "Press 5 to show the first element of the queue" << std::endl;
        std::cout << "Press 6 to show the last element of the queue" << std::endl;
        std::cout << "Press 7 to check if the queue is empty" << std::endl;
        std::cout << "Press 8 to exit" << std::endl;
        int menu;
        std::cin >> menu;
        switch (menu) {
            case 1:
                int item;
                std::cin >> item;
                i->enqueue(item);
                break;
            case 2:
                i->dequeue();
                break;
            case 3:
                i->show();
                break;
            case 4:
                i->size();
                break;
            case 5:
                i->front();
                break;
            case 6:
                i->back();
                break;
            case 7:
                i->empty_check();
                break;
            case 8:
                quit = true;
                std::cout << "Bye!" << std::endl;
                break;
            default:
                break;
        }
    }
}
#endif //INC_7_2_QUEUE_INT_HPP
