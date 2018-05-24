#ifndef HashTable_h
#define HashTable_h

#include <iostream>
#include <vector>
#include "Queue.h"
using namespace std;

struct HashTable{
    long size;
    vector<Queue*> hashtable;
    HashTable(){
        for (long i = 0; i < 10; i++) {
            
            hashtable.push_back(new Queue());
        }
    }
    HashTable(long sizeh){
        size=sizeh;
        for (long i = 0; i < 10; i++) {
            
            hashtable.push_back(new Queue());
        }
    }
    long hash (long input){
            return input % size;
        }
        
        
        void insert(long value){
            long index = hash(value);
            hashtable[index]->push(value);
            
        }
        
        void print(){
            for(int i = 0; i < size; i++){
                cout << i << ": ";
                hashtable[i]->print();
                cout << endl;
            }
        }
        
        bool find(long value){
            long index = hash(value);
            
            return hashtable[index]->find(value);
        }
        
        ~HashTable(){
            for(int i = 0; i < size; i++){
                Queue* temp = hashtable[i];
                temp->~Queue();
                hashtable[i] = NULL;
            }
        }
};
#endif
