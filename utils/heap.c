#include "heap.h"

// up
long heap_insert(int s[], int index,long count) {
    while(s[index] > s[(index - 1)/ 2]){      
        swap(s, index, (index - 1) / 2);
        index = (index - 1) /2 ;
        count += 2;
    }
    return count;
}

// down
long heapify(int s[], int index, int heap_size,long count) {
    int left = index * 2 + 1;
    while(left < heap_size) {
        int largest = left + 1 < heap_size && s[left + 1] > s[left] ? left + 1 : left;
        largest = s[largest] > s[index] ? largest : index;
        count += 4;
        if(largest == index) {
            count += 1;
            break;
        }
        swap(s, largest, index);
        count += 1;
        index = largest;
        left = index * 2 + 1;
        return count;
    }
}