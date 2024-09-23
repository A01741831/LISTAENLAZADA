#include "MyLinkedList.h"
#include <stdexcept>
using namespace std;

MyLinkedList::MyLinkedList(){
    this->size=0;
    this->head=this->tail=nullptr;
}

int MyLinkedList::length(){
   return this->size;
}

bool MyLinkedList::isEmpty(){
    return this->size==0;
}

int MyLinkedList::first(){
    if(this->size>0){
        return this->head->data;
    }else{
        throw invalid_argument("No se puede regresar el primer elemento de una lista vacia");
    }
}

int MyLinkedList::last(){
    if(this->size>0){
        return this->tail->data;
    }else{
        throw invalid_argument("No se puede regresar el ultimo elemento de una lista vacia");
    }
}

void MyLinkedList::insertFirst(int data){
    MyNodoLL* nvo=new MyNodoLL(data,this->head);
    nvo->next=this->head;
    this->head=nvo;
    this->size++;
}