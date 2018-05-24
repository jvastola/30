#include <iostream>
#include "OpStack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Stack* myStack = new Stack();

    myStack->push(5, 'a');
    myStack->push(2, 's');
    myStack->push(7, 'a');

    while (!myStack->isEmpty()) {
        Link* temp = myStack->pop();
        cout << temp->data << " - " << temp->op << endl;
        delete temp;
    }

    return 0;
}
