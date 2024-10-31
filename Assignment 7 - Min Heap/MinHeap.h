// 
// Name: MinHeap.h
// Author: Eisig Liang
// Last update: 31/10/24
// Purpose: Do various things with a min heap
// 

#pragma once
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class MinHeap {
private:
    vector<T> heap;
    void heapify(); //Heapify heap; used by insert() and sort()

public:
    MinHeap();
    void insert(T input);
    vector<T> extractMin();
    void print();
    void sort(T input);
};

template <typename T>
void MinHeap<T>::heapify() {

}

template <typename T>
MinHeap<T>::MinHeap() {
    
}

template <typename T>
void MinHeap<T>::insert(T input) {

}

template <typename T>
vector<T> MinHeap<T>::extractMin() {
    
}

template <typename T>
void MinHeap<T>::print() {

}

template <typename T>
void MinHeap<T>::sort(T input) {

}