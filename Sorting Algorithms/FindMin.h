
#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here
int findMin(int n[], int s, int e){
   int min=n[s];
   int p=s;
  while(s<e){
      if(n[s]<min){
          n[s]=min;
    p=s;
      }
      s++;
  }
   return p;
    
}

// Do not write any code below this line
#endif