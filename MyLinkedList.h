#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
using namespace std;

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
    public:
        int size;
        MyNodoLL*head;
        MyNodoLL*tail;
    //public:
        MyLinkedList(); //
        ~MyLinkedList();
        int length(); //
        bool isEmpty(); //
        int first(); //
        int last(); //
        int getAt(int pos);
        void setAt(int pos,int data);
        void insertFirst(int data); //
        void insertLast(int data);
        void insertAt(int pos,int data);
        void removeFirst(); //
        void removeLast();
        void removeAt(int pos);
        friend ostream operator<<(ostream& os, const MyLinkedList& l);
};

#endif