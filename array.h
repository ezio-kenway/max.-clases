//
// Created by utec on 18/11/19.
//


#ifndef SEMANA14_ARRAY_H
#define SEMANA14_ARRAY_H
#include "tipos.h"

template <typename T>
class MyArray{
private:
    T*ptr;
    t size;
public:
    MyArray(T *arr, t s);
    T max();
    ~MyArray();
};

#endif //SEMANA14_ARRAY_H


template <typename T>
MyArray<T>::MyArray(T *arr, t s){
    ptr=new T[s];
    size=s;
    for (t i=0; i<size;i++){
        ptr[i]=arr[i];
    }
};

template <typename T>
T MyArray<T>::max(){
    T vmax=ptr[0];
    for (t i=1;i<size; i++){
        if (ptr[i]>vmax){vmax=ptr[i];}
    }
    return vmax;
};

template <typename T>
MyArray<T>::~MyArray(){
    delete[]ptr;
    ptr= nullptr;
};






