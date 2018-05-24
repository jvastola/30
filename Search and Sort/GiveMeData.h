#ifndef GiveMeData_h
#define GiveMeData_h

void giveMeSortedData(long* list, long size){
    // These numbers will be sorted
    for (long i = 0; i < size; i++) {
        list[i] = i;
    }
}

void giveMeUnsortedData(long* list, long size){
    for (long i = 0; i < size; i++) {
        list[i] = i;
    }
    // Making the last value -1 breaks the sortedness
    list[size-1] = -1;
}

#endif
