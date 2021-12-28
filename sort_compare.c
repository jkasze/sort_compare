#include "sort_compare.h"
#include <stdio.h>
// 1. 插入排序 O(N^2)
void insertion_sort(int s[],int n){
    if(s == NULL || n < n){
        return;
    }

    for(int i = 1; i < n; i++) {
        for(int j = i - 1; j >= 0 && s[j] > s[j + 1]; j--) {
            swap(s, j, j + 1);
        }
    }
}
// 2. 希尔排序
//void shell_sort(int s[], int n);
// 3. 冒泡排序 O(N^2)
void bubble_sort(int s[], int n) {
    if (s == NULL || n < 2) {
        return;
    }
    for (int e = n - 1; e > 0; e--) {
        for(int i = 0; i < e;  i++){
            if(s[i] > s[i + 1]) {
                swap(s, i, i+ 1);
            }
        }
    }
}
// 4. 快速排序
//void quick_sort(int s[], int n);
// 5. 选择排序 O(N^2)
void selection_sort(int s[], int n) {
    if(s == NULL || n < 2) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1;j < n; j++) {
            minIndex = s[j] < s[minIndex] ? j : minIndex;
        }
        swap(s, i, minIndex);
    }
}
// 6. 堆排序 O(N*logN)
void heap_sort(int s[], int n) {
    if(s == NULL || n < 2) {
        return;
    }
    // O(N)
    for (int i = n - 1; i >= 0; i--) {
        heapify(s, i, n);
    }
    int heap_size = n;
    swap(s, 0, --heap_size);
    // O(N*logN)
    while(heap_size > 0) {  // O(N)
        heapify(s, 0, heap_size);   // O(logN)
        swap(s, 0, --heap_size);    // O(1)
    }
}
// 7. 归并排序 O(N*logN)
void merge(int s[], int L, int M, int R);

void merge_sort(int s[], int L, int R){
    if(s == NULL || L == R){
        return;
    }
    int mid = L + ((R -L) >> 1);
    merge_sort(s, L, mid);
    merge_sort(s, mid + 1, R);
    merge(s, L, mid, R);
}

void merge(int s[], int L, int M, int R) {
    int help[R - L + 1];
    int i = 0;
    int p1 = L;
    int p2 = M + 1;
    while (p1 <= M && p2 <= R) {
        help[i++] = s[p1] <= s[p2] ? s[p1++] : s[p2++];
    }

    while (p1 <= M) {
        help[i++] = s[p1++];
    }
    while(p2 <= R) {
        help[i++] = s[p2++];
    }
    for(i = 0;i < sizeof(help) / sizeof(help[0]); i++) {
        s[L + i] = help[i];
    }
}

