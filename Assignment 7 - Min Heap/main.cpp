// 
// Name: main.cpp
// Author: Eisig Liang
// Last update: 2/11/24
// Purpose: Test min heap implementation
// Notices:
//     1. ChatGPT was used to generated test cases
//

#include "MinHeap.h"
#include <iostream>
#include <array>
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

    //Test extractMin function
    cout << "Testing extractMin function: ";
    cout << intTest.extractMin() << endl;

    //Test print function
    cout << "Testing print function: ";
    intTest.print();

    //Test with characters and sort function
    cout << "Testing MinHeap class with char types:" << endl;
    MinHeap<array<char, 10>> charTest;
    cout << "Testing sort function: ";
    array<char, 10> randomCharacters = { 'g', 'Z', 'p', 'Q', 'r', 'L', 'x', 'T', 'k', 'M' };
    charTest.sort(randomCharacters);
}