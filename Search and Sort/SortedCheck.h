#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){
   // Provide your code here...
   bool istrue=true;
   for(int i=1;i<size;i++)
   {
       if(list[i]<list[i-1])
       istrue=false;
   }
   return istrue;
}

#endif 