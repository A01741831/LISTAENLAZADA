#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "MyLinkedList.h"

class MyQueue{
    private:
        MyLinkedList lista;
    public:
    void enqueue(int data);
    void dequeue();
    int peek();
    bool isEmpty();
    int length();
    void flush(); //Deja la fila vacia
}; 
#endif