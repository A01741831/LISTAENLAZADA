#ifndef MYSTACK_H
#define MYSTACK_H
#include "MyLinkedList.h"

class MyStack{
    private:
        MyLinkedList lista;
    public:
        bool isEmpty();
        int length();
        void push(int data);
        void pop();
        int top();
        void flush();

};
#endif