#include <iostream>
#include "OpStack.h"

using namespace std;


int main(int argc, const char * argv[]) {
    int total = 0;
    Stack* ops = new Stack();
    char command;
    while(command != 'q'){
        int curr = 0;
        cin >> command;
        switch(command){
            case 'a':
                cin >> curr;
                total = total + curr;
                ops->push(curr, 'a');
                cout << "Total: "<< total << endl;
                break;
            case 's':
                cin >> curr;
                total = total - curr;
                ops->push(curr, 's');
                cout << "Total: "<< total << endl;
                break;
            case 'z':
                Link* rev = ops->pop();
                while(rev->op == 'z'){
                    rev = ops->pop();
                }
                switch(rev->op){
                    case 'a':
                        total = total - rev->data;
                        cout << "Total: "<< total << endl;
                        break;
                    case 's':
                        total = total + rev->data;
                        cout << "Total: "<< total << endl;
                        break;
                    default:
                        cout << "Nothing to undo..." << endl;
                        break;
                }
                break;
        }
    }
    return 0;
}
