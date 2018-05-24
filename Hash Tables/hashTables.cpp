#include <iostream>
#include "HashTable.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    const long k = 10;
    
    HashTable ht(k);
    
    ht.insert(54);
    
    ht.print();
    
    long a = 54;
    
    cout << "Searching for " << a << "..." << endl;
    
    if (ht.find(a)){
        cout << a << " was found." << endl;
    }
    else {
        cout << a << " was not found." << endl;
    }
    
    return 0;
}
