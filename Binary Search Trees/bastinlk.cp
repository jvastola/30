#include <iostream>
#include "BSTUtil.h"
#include "RandomSupport.h"

using namespace std;
int main() {
	int n;
	cin >>n;
struct Node *root = NULL;
    
    randomizer device = new_randomizer();
    uniform_distribution range = new_distribution(1, 1000);
    
    for (long i = 1; i < n; i++) {
      insert(root, sample(range,device));
    }
     root=insertSpecialNumber(root);
   
    findSpecialNumber(root);


    return 0;
}
