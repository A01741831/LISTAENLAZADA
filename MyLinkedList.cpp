#include "MyLinkedList.h"
#include <stdexcept>
using namespace std;

MyLinkedList::MyLinkedList(){
    this->size=0;
    this->head=this->tail=nullptr;
}

MyLinkedList::~MyLinkedList(){
    while(this->size>0){
        this->removeFirst();
    }
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

int MyLinkedList::getAt(int pos){
    if(this->size>0){
    MyNodoLL*tmp=this->head;
    for(int i=0;i<pos;i++){
        tmp=tmp->next;
    }
    return tmp->data;
    }else{
        throw invalid_argument("No se puede regresar un elemento de una lista vacia");
    }
}

void MyLinkedList::setAt(int pos,int data){
    if(this->size>0){
    MyNodoLL*tmp=this->head;
    for(int i=0;i<pos;i++){
        tmp=tmp->next;
    }
    tmp->data=data;
    }else{
        throw invalid_argument("No se puede modificar un elemento de una lista vacia");
    }
}

void MyLinkedList::insertFirst(int data){
    MyNodoLL* nvo=new MyNodoLL(data,this->head);
    nvo->next=this->head;
    this->head=nvo;
    this->size++;
}

void MyLinkedList::insertLast(int data){
    MyNodoLL* nvo=new MyNodoLL(data);
    if(this->size==0){
        this->head=this->tail=nvo;
    }else{
        this->tail->next=nvo;
        this->tail=nvo;
    }
    this->size++;
}

void MyLinkedList::insertAt(int pos,int data){
    if(this->size>0){
    if(pos==0){
        this->insertFirst(data);
    }else if(pos==this->size){
        this->insertLast(data);
    }else{
        MyNodoLL*tmp=this->head;
        for(int i=0;i<pos-1;i++){
            tmp=tmp->next;
        }
        MyNodoLL*nvo=new MyNodoLL(data,tmp->next);
        tmp->next=nvo;
        this->size++;
    }
    }else{
        throw invalid_argument("No se puede insertar un elemento en una lista vacia");
    }
}

void MyLinkedList::removeFirst(){
    if(this->size>0){
    MyNodoLL*tmp=this->head;
    this->head=this->head->next;
    delete tmp;
    this->size--;
    if(this->size==0){
        this->tail=nullptr;
    }
    }else{
        throw invalid_argument("No se puede eliminar el primer elemento de una lista vacia");
    }
}

void MyLinkedList::removeLast(){
    if(this->size>0){
    if(this->size==1){
        delete this->head;
        this->head=this->tail=nullptr;
    }else{
        MyNodoLL*tmp=this->head;
        while(tmp->next!=this->tail){
            tmp=tmp->next;
        }
        delete this->tail;
        this->tail=tmp;
        this->tail->next=nullptr;
    }
    this->size--;
    }else{
        throw invalid_argument("No se puede eliminar el ultimo elemento de una lista vacia");
    }
}

void MyLinkedList::removeAt(int pos){
    if(this->size>0){
    if(pos==0){
        this->removeFirst();
    }else if(pos==this->size-1){
        this->removeLast();
    }else{
        MyNodoLL*tmp=this->head;
        for(int i=0;i<pos-1;i++){
            tmp=tmp->next;
        }
        MyNodoLL*tmp2=tmp->next;
        tmp->next=tmp2->next;
        delete tmp2;
        this->size--;
    }
    }else{
        throw invalid_argument("No se puede eliminar un elemento de una lista vacia");
    }
}