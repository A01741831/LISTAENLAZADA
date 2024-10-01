#include "MyStack.h"
#include <stdexcept>

bool MyStack::isEmpty(){
    return this->lista.isEmpty();
}

int MyStack::length(){
    return this->lista.length();
}

void MyStack::push(int data){
    this->lista.insertFirst(data);
}

void MyStack::pop(){
    try{
    this->lista.removeFirst();
    }catch(invalid_argument ex){
        throw invalid_argument("No se puede hacer pop de una pila vacia");
    }
}

int MyStack::top(){
    try{
    return this->lista.first();
    }catch(invalid_argument ex){
        throw invalid_argument("No se puede hacer top de una pila vacia");
    }
}

void MyStack::flush(){
    while(!this->isEmpty()){
        this->pop();
    }
}