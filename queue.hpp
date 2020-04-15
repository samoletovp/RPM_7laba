/**
*
* @file queue.hpp
* @author Samoletov Petr <samoletovp@gmail.com>
* @brief Шаблон класса очередей
*
*/
#ifndef INC_7_2_QUEUE_HPP
#define INC_7_2_QUEUE_HPP

#include <list>
#include <iostream>

template <typename T> class Queue
{
public:
    std::list<T> list;
    void empty_check() {
        if (list.empty()) { std::cout << "Queue is empty" << std::endl; }
        else { std::cout << "Queue is not empty" << std::endl; }
    }
    bool empty()
    {
        return list.empty();
    }
    void enqueue(T item)
    {
        list.push_back(item);
        std::cout << "Enqueued " << item << std::endl;
    }
    void show()
    {
        try
        {
            if (empty())
            {
                throw 1;
            }
            for (auto iter = list.begin(); iter != list.end(); iter++) {
                std::cout << *iter << " ";
            }
            std::cout << std::endl;
        }
        catch(int n)
        {
            std::cout << "Error " << n << ":  Can't show: queue is empty" << std::endl;
        }
    }

    int size()
    {
        std::cout << "Queue size: " << list.size() << std::endl;
        return list.size();
    }
    void dequeue()
    {
        try
        {
            if (empty())
            {
                throw 2;
            }
            list.pop_front();
            std::cout << "Deque successful" << std::endl;
        }
        catch(int n)
        {
            std::cout << "Error " << n << ": Nothing to dequeue: queue is empty" << std::endl;
        }
    }
    T front()
    {
        try
        {
            if (empty())
            {
                throw 1;
            }
            std::cout << "First element: " << list.front() << std::endl;
            return list.front();
        }
        catch(int n)
        {
            std::cout << "Error " << n << ": Can't show: queue is empty" << std::endl;
        }
    }
    T back()
    {
        try
        {
            if (empty())
            {
                throw 1;
            }
            std::cout << "Last element: " << list.back() << std::endl;
            return list.back();
        }
        catch(int n)
        {
            std::cout << "Error " << n << ": Can't show: queue is empty" << std::endl;
        }
    }
};
#endif //INC_7_2_QUEUE_HPP
