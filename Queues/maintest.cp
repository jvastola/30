#include <iostream>
#include "StringQueue.h"
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    Queue queue;
    string name;
    bool run = true;
    char c;
    while(run){
        cin >> c;
        switch(c){
            case 'a':
                cin >> name;
                queue.push(name);
                cout << name << " arrived" << endl;
                break;
            case 's':
                if(!queue.isEmpty()){
                    cout << "Now serving: "<< queue.pop() << endl;
                    //queue.pop();
                }
                else{
                    cout << "No customers waiting" << endl;
                }
                break;
                
            case 'q':
                while (!queue.isEmpty()) {
                    if(run){
                        cout << "Come back tomorrow: "<< endl;
                        run=false;
                    }
                    cout << queue.pop() << endl;
                }
                run=false;
                break;
                
            case 'n':
                if(!queue.isEmpty()){
                    cout << "Next in line: "<< queue.peek() << endl;
                }
                else{
                    cout << "The waiting list is empty"<< endl;
                }
                break;
                
            default:
                return 0;
                break;
        }
        
    }
    cout<< "Closing up now."<<endl;
  //  delete queue;
    return 0;
}
