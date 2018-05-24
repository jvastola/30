#ifndef Queue_h
#define Queue_h

#include <string>

struct Link {
    std::string data;
    Link* next;
    
    Link(){
        data = "-1";
        next = NULL;
    }
    
    Link(std::string name) {
        data = name;
        next = NULL;
    }
    
    Link(std::string name, Link* prev){
        data = name;
        next = prev;
    }
};

struct Queue {
    Link* top = new Link();
    
    void push(std::string data){
        if(top->data != "-1"){
            Link* newLink = new Link(data);
            Link* pointer = top;
            while(pointer->next != NULL){
                pointer = pointer->next;
            }
            pointer->next = newLink;
        } else {
            top->data = data;
        }
    }
    
    bool isEmpty(){
        if(top == NULL){
            return true;
        } else {
            return false;
        }
    }
    
    std::string pop(){
        Link *temp = top;
        top = temp->next;
        
        return temp->data;
    }
    
    std::string peek(){
        return top->data;
    }
    
};

#endif

