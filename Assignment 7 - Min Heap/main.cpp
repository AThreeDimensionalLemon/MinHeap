// 
// Name: main.cpp
// Author: Eisig Liang
// Last update: 31/10/24
// Purpose: Test min heap implementation
// Notices:
//     1. ChatGPT was used to generated test cases
//

#include "MinHeap.h"
#include <iostream>
using namespace std;

int main() {

    //Test with integers
    cout << "Testing MinHeap class with int types:" << endl;
    MinHeap<int> intTest;

    //Test insert function
    cout << "Testing insert function: ";
    int randomIntegers[10] = { 42, 17, 89, 3, 56, 74, 23, 65, 38, 91 };
    for (auto integer : randomIntegers) intTest.insert(integer);
    cout << "Done!" << endl;
}
