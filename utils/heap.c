#include "heap.h"

// up
void heap_insert(int s[], int index) {
    while(s[index] > s[(index - 1)/ 2]){
        swap(s, index, (index - 1) / 2);
        index = (index - 1) /2 ;
    }
}

// down
void heapify(int s[], int index, int heap_size) {
    int left = index * 2 + 1;
    while(left < heap_size) {
        int largest = left + 1 < heap_size && s[left + 1] > s[left] ? left + 1 : left;
        largest = s[largest] > s[index] ? largest : index;
        if(largest == index) {
            break;
        }
        swap(s, largest, index);
        index = largest;
        left = index * 2 + 1;
    }
}