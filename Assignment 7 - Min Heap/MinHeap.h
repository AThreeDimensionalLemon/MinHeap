// 
// Name: MinHeap.h
// Author: Eisig Liang
// Last update: 3/11/24
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

    int heapify(T value);

    //Swap values when heapifying
    void swap(int swapIndex, int valueIndex, T value);

    int recursivePrint(T root);

    int parent(int index); //Get index of parent
    int left(int index); //Get index of left child
    int right(int index); //Get index of right child

public:
    MinHeap();
    void insert(T input);
    T extractMin(); //Return and delete minimum value
    void print(); //Start of recursivePrint
    void sort(T input);
};

template <typename T>
int MinHeap<T>::heapify(T value) {
    int valueIndex = find(heap.begin(), heap.end(), value) - heap.begin();

    if (valueIndex != 0 and
        value < heap[parent(valueIndex)])
    { //Swap if less than parent
        swap(parent(valueIndex), valueIndex, value);
        heapify(value);
    }

    else if (left(valueIndex) < heap.size() and
        value >= heap[left(valueIndex)])
    { //Swap if greater than left child
        swap(left(valueIndex), valueIndex, value);
        heapify(value);
    }

    else if (right(valueIndex) < heap.size() and
        value >= heap[right(valueIndex)])
    { //Swap if greater than right child
        swap(right(valueIndex), valueIndex, value);
        heapify(value);
    }

    else return 0; //When all good, break
}

template <typename T>
void MinHeap<T>::swap(int swapIndex, int valueIndex, T value) {
    T swappedValue = heap[swapIndex];
    heap[swapIndex] = value;
    heap[valueIndex] = swappedValue;
}

template <typename T>
int MinHeap<T>::recursivePrint(T currentIndex) {

    if (currentIndex >= heap.size()) return 0; //Base case

    cout << heap[currentIndex] << endl;

    recursivePrint(left(currentIndex));
    recursivePrint(right(currentIndex));
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
    T root = heap[0];
    heap[0] = heap[heap.size() - 1];
    heap.pop_back();
    heapify(heap[0]);
    return root;
}

template <typename T>
void MinHeap<T>::print() {
    recursivePrint(0);
}

template <typename T>
void MinHeap<T>::sort(T input) {
    
}