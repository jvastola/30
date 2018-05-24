#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements


void insertion_sort(int a[], int l){
    for(int i=1;i<l;i++){
        int t=a[i];
        int j=i-1;
        while(a[j]>t && j>=0 ){       
          swap(a,j,j+1);
         j--;
         }
        a[j+1]=t;
        
    }
}

// Do not write any code below this line
#endif