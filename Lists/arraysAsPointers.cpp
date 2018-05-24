#include <iostream>
#include "ArraySupport.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // Allocate space on the heap for 5 ints
    // This space is pointed to by pointer arr
    int* arr = new int[5];

    // Populate with some values
    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 3;
    arr[3] = 6;
    arr[4] = 1;

    // Get the value at position 3 and print it
    cout << getIndex(arr, 3) << endl;

    // Free the memory that was allocated on the heap
    delete[] arr;

    return 0;
}
