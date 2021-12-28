#include "sort_compare.h"

// 1. 插入排序
void insertion_sort(int s[], int n){
    if (s == NULL || n < 2) {
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
// 3. 冒泡排序
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
// 5. 选择排序
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
// 6. 堆排序
//void heap_sort(int s[], int n);
// 7. 归并排序
//void merge_sort(int s[], int n);

