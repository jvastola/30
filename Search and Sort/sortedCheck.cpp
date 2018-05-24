#include <iostream>
#include "GiveMeData.h"
#include "SortedCheck.h"

using namespace std;



int main() {

    long size;
    cin >> size;

    long* sortedNumbers;
    sortedNumbers = new long[size];

    long* unsortedNumbers;
    unsortedNumbers = new long[size];

    giveMeSortedData(sortedNumbers, size);
    giveMeUnsortedData(unsortedNumbers, size);

    bool sortedCorrect = sortedCheck(sortedNumbers, size);
    bool unsortedCorrect = sortedCheck(unsortedNumbers, size);

    if (sortedCorrect && !unsortedCorrect){
        cout << "Correct!" << endl;
    }
    else{
        cout << "Incorrect!" << endl;
    }

    delete[] sortedNumbers;
    delete[] unsortedNumbers;

    return 0;
}
