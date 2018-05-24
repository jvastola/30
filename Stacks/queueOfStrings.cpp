#include <iostream>
#include "StringQueue.h"

using namespace std;

int main(int argc, const char * argv[]) {

    Queue queue;

    queue.push("Jack");
    queue.push("Jill");
    queue.push("Jane");
    queue.push("John");

    while (!queue.isEmpty()) {
        cout << queue.pop() << endl;
    }

    return 0;
}
