#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

struct MyNodoLL{
    int data;
    MyNodoLL*next;

    MyNodoLL(int data,MyNodoLL*next){
        this->data=data;
        this->next=next;
    }

    MyNodoLL(int data):MyNodoLL(data,nullptr){}
};

class MyLinkedList{
    private:
        int size;
        MyNodoLL*head;
        MyNodoLL*tail;
    public:
        MyLinkedList();
        //-MyLinkenList();
        int length();
        bool isEmpty();
        int first();
        int last();
        void insertFirst(int data);
};

#endif