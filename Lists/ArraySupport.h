#ifndef arraySupport_h
#define arraySupport_h

// A function to get the value at a specific position
int getIndex(int* list, int pos){
    // Provide your code here...
     list=list+pos;
    return *list;
}

#endif