#include "MyQueue.h"
#include <stdexcept>

bool MyQueue::isEmpty(){
    return this->lista.isEmpty();
}

int MyQueue::length(){
    return this->lista.length();
}

void MyQueue::enqueue(int data){
    this->lista.insertLast(data);
}

void MyQueue::dequeue(){
    try{
    this->lista.removeFirst();
    }catch(invalid_argument ex){
        throw invalid_argument("No se puede hacer dequeue de una fila vacia");
    }
}

int MyQueue::peek(){
    try{
    return this->lista.first();
    }catch(invalid_argument ex){
        throw invalid_argument("No se puede hacer peek de una fila vacia");
    }
}

void MyQueue::flush(){
    while(!this->isEmpty()){
        this->dequeue();
    }
}