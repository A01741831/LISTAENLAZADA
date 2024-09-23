
#include "MyLinkedList.h"
#include <iostream>
using namespace std;

int main(){
    MyLinkedList lista;
    try{
    cout<<"La lista es de tamaño "<<lista.length()<<endl;
    cout<<"La lista esta vacia "<<lista.isEmpty()<<endl;
    cout<<"El primer elemento de la lista es "<<lista.first()<<endl;
    }catch(invalid_argument ex){
        cout<<"Hubo un error: "<<ex.what();
    }
    return 0;
}