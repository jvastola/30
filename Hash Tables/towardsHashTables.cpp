#include <iostream>
#include <vector>
#include "Queue.h"

using namespace std;

long k = 10;

long f (long x){
    return x % k;
}

int main() {
    
    // Declare a vector of Queue pointers
    vector<Queue*> hashtable;
    
    // Initialize the vector with k empty Queues
    for (long i = 0; i < k; i++) {
        hashtable.push_back(new Queue());
    }
    
    // This is the value I want to insert
    long value = 234;
    
    // Run it through the hash function to determine
    // to which queue we need to push it
    long index = f(value);
    
    // Push value to the index-th Queue
    hashtable[index]->push(value);
    
    // One more time
    value = 23;
    
    index = f(value);
    hashtable[index]->push(value);
    
    // One more time
    value = 23453;
    
    index = f(value);
    hashtable[index]->push(value);
    
    
    // Let's do some searching
    
    // This is what I am searching for
    value = 7;
    
    // Which queue should I be looking at
    index = f(value);
    
    // Look for it in the queue pointed to by index
    cout << hashtable[index]->find(value) << endl << endl;
    
    // Print contents of hash table
    for (long i = 0; i < k; i++) {
        Queue* current = hashtable[i];
        
        cout << i << ": ";
        
        current->print();
        cout << endl;
    }
    
    for (long i = 0; i < k; i++) {
        delete hashtable[i];
    }
    
    return 0;
}
