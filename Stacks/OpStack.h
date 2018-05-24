#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
    long data;
    char op;
    Link* next;
    Link(){
        data = 0;
        op=' ';
        next = NULL;
    } 
    Link (long d, char c){
        data = d;
        op=c;
        next = NULL;
    }
};

// Now define the Stack struct. It should be a stack of Links...
struct Stack {
    Link* front;
    Stack(){
        front = NULL;
    }
    void push(long value,char cha){
        Link* old = front;
        front = new Link(value,cha);
        front->next = old;
    }
    bool isEmpty(){
        return (front == NULL);
    }
    Link* pop(){
        long val = front->data;
        char ca= front->op;
        Link* oldFront = front;
        front = front->next; 
        return oldFront; 
        delete oldFront;
       // return front;
    }
};

#endif
