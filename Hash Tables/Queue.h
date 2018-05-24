
#ifndef Queue_h
#define Queue_h

#include <iostream>

struct Link {
    long data;
    Link* next;
    
    Link(){
        data = 0;
        next = NULL;
    }
    
    Link (long d){
        data = d;
        next = NULL;
    }
};

struct Queue {
    Link* front;
    Link* back;
    
    Queue (){
        front = NULL;
        back = NULL;
    }
    
    long peek () {
        return front->data;
    }
    
    void push(long value){
        if (isEmpty()){
            front = new Link(value);
            back = front;
        }
        else {
            back->next = new Link(value);
            back = back->next;
        }
    }
    
    bool find (long value){
        if (isEmpty()){
            return false;
        }
        else{
          //  front = new Link(value);
           while(front!= NULL)
            {
                if(front->data==value){
                    return true;
                    front=front->next;
                }
            }
            return false;
        }
    }
    
    bool isEmpty(){
        return (front == NULL);
    }
    
    long pop(){
        long val = front->data;
        
        Link* oldFront = front;
        front = front->next;
        
        delete oldFront;
        
        return val;
    }
    
    void print() {
        while (!isEmpty())
        {
            std::cout << front->data << " ";
            pop();
        }
        std::cout << std::endl;
        
    }
    ~Queue(){
        Link* temp;
        while(front != NULL){
            temp = front;
            front = front->next;
            delete temp;
        }
    }
};

#endif
