// 
// Name: MinHeap.h
// Author: Eisig Liang
// Last update: 1/11/24
// Purpose: Do various things with a min heap
// 

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class MinHeap {
private:
    vector<T> heap;

    //Helper function for code reuse and recursion
    int heapify(T value); 

    //Functions for getting relevant index in relation to a vertex's index
    int parent(int index);
    int left(int index);
    int right(int index);

public:
    MinHeap();
    void insert(T input);
    T extractMin();
    void print();
    void sort(T input);
};

template <typename T>
int MinHeap<T>::heapify(T value) {
    int valueIndex = find(heap.begin(), heap.end(), value) - heap.begin();

    if (valueIndex != 0 and
        value > heap[parent(valueIndex)])
    { //Swap if greater than parent
        T swappedValue = heap[parent(valueIndex)];
        heap[parent(valueIndex)] = value;
        heap[valueIndex] = swappedValue;
        heapify(value);
    }

    else if (left(valueIndex) < heap.size() and
        value < heap[left(valueIndex)])
    { //Swap if less than left child
        T swappedValue = heap[left(valueIndex)];
        heap[left(valueIndex)] = value;
        heap[valueIndex] = swappedValue;
        heapify(value);
    }

    else if (right(valueIndex) < heap.size() and
        value < heap[right(valueIndex)])
    { //Swap if less than right child
        T swappedValue = heap[right(valueIndex)];
        heap[right(valueIndex)] = value;
        heap[valueIndex] = swappedValue;
        heapify(value);
    }
}

template <typename T>
int MinHeap<T>::parent(int index) {
    return (index - 1) / 2;
}

template <typename T>
int MinHeap<T>::left(int index) {
    return 2 * index + 1;
}

template <typename T>
int MinHeap<T>::right(int index) {
    return 2 * index + 2;
}

template <typename T>
MinHeap<T>::MinHeap() {

}

template <typename T>
void MinHeap<T>::insert(T input) {
    heap.push_back(input);
    heapify(input);
}

template <typename T>
T MinHeap<T>::extractMin() {
    
}

template <typename T>
void MinHeap<T>::print() {

}

template <typename T>
void MinHeap<T>::sort(T input) {
    
}