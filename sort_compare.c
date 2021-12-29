#include "sort_compare.h"

// 1. 插入排序 O(N^2)
long insertion_sort(int s[],int n){
    long count = 0;
    if(s == NULL || n < 2){
        count += 2;
        return count;
    }

    for(int i = 1; i < n; i++) {
        for(int j = i - 1; j >= 0 && s[j] > s[j + 1]; j--) {
            count += 2;
            swap(s, j, j + 1);
            count += 1;
        }
        count += 1;
    }
    return count;
}
// 2. 希尔排序 O(N^1.5)
long shell_sort(int s[], int n){
    long count = 0;
    if(s == NULL || n < 2) {
        count += 2;
        return count;
    }
    int gap = 1, i, j;
    int temp;
    while(gap < n / 3) {
        gap = gap * 3 + 1;
        count += 1;
    }
    for(; gap > 0; gap /= 3) {
        count += 1;
        for(i = gap; i < n; i++){
            count += 1;
            temp = s[i];
            for(j = i - gap; j >= 0 && s[j] > temp; j -= gap) {
                count += 2;
                s[j + gap] = s[j];
            }
            s[j + gap] = temp;
            count += 1;
        }   
    }
    return count;
}
// 3. 冒泡排序 O(N^2)
long bubble_sort(int s[], int n) {
    long count = 0;
    if (s == NULL || n < 2) {
        count += 1;
        return count;
    }
    for (int e = n - 1; e > 0; e--) {
        count += 1;
        for(int i = 0; i < e;  i++){
            count += 1;
            if(s[i] > s[i + 1]) {
                count += 1;
                swap(s, i, i+ 1);
            }
        }
    }
    return count;
}
// 4. 快速排序 O(N*logN)
int partition(int s[], int l, int r, long *count);
void quick_sort_(int s[], int l, int r,long *count);

long quick_sort(int s[], int n){
    long *count = malloc(sizeof(long));
    *count = 0;
    if(s == NULL || n < 2){
        *count += 2;
        return *count;
    }
    quick_sort_(s, 0, n - 1, count);
    return *count;
}
void quick_sort_(int s[], int l, int r,long* count) {
    if(l < r){
        *count += 1;
        int m = partition(s, l, r, count);
        quick_sort_(s, l, m - 1, count);
        quick_sort_(s, m + 1, r, count);
    }
}
int partition(int s[], int l, int r,long *count) {
    if (l > r) {
        *count += 1;
        return -1;
    }
    if (l == r) {
        *count += 1;
        return l;
    }
    int lessEqual = l - 1;
    int index = l;
    while (index < r) {
        *count += 1;
        if (s[index] < s[r]) {
            *count += 1;
            swap(s, index, ++lessEqual);
            *count += 1;
        }
        index++;
    }
    swap(s, ++lessEqual, r);
    *count += 1;
    return lessEqual;
}

// 5. 选择排序 O(N^2)
long selection_sort(int s[], int n) {
    long count = 0;
    if(s == NULL || n < 2) {
        count += 2;
        return count;
    }
    for (int i = 0; i < n - 1; i++) {
        count += 1;
        int minIndex = i;
        for(int j = i + 1;j < n; j++) {
            count += 1;
            minIndex = s[j] < s[minIndex] ? j : minIndex;
            count += 1;
        }
        swap(s, i, minIndex);
        count += 1;
    }
    return count;
}
// 6. 堆排序 O(N*logN)
long heap_sort(int s[], int n) {
    long count = 0;
    if(s == NULL || n < 2) {
        count += 2;
        return count;
    }
    for (int i = 0; i < n; i++) { // O(N)
			heap_insert(s, i, count); // O(logN)
	}
    int heap_size = n;
    swap(s, 0, --heap_size);
    count += 1;
    // O(N*logN)
    while(heap_size > 0) {  // O(N)
        count += 1;
        count += heapify(s, 0, heap_size, count);   // O(logN)
        swap(s, 0, --heap_size);    // O(1)
        count += 1;
    }
    return count;
}
// 7. 归并排序 O(N*logN)
void merge(int s[], int L, int M, int R, long *count);
void merge_sort_(int s[], int L, int R, long *count);
long merge_sort(int s[], int n) {
    long *count = malloc(sizeof(long));
    *count = 0;
    if(s == NULL || n < 2){
        *count += 2;
        return *count;
    }
    merge_sort_(s, 0 ,n - 1, count);
    return *count;
}
void merge_sort_(int s[], int L, int R, long* count){
    if (L == R) { 
        *count += 1;
		return;
	}
    int mid = L + ((R -L) >> 1);
    merge_sort_(s, L, mid,count);
    merge_sort_(s, mid + 1, R,count);
    merge(s, L, mid, R, count);
}

void merge(int s[], int L, int M, int R, long* count) {
    int help[R - L + 1];
    int i = 0;
    int p1 = L;
    int p2 = M + 1;
    while (p1 <= M && p2 <= R) {
        *count += 2;
        help[i++] = s[p1] <= s[p2] ? s[p1++] : s[p2++];
        *count += 1;
    }

    while (p1 <= M) {
        *count += 1;
        help[i++] = s[p1++];
    }
    while(p2 <= R) {
        *count += 1;
        help[i++] = s[p2++];
    }
    for(i = 0;i < sizeof(help) / sizeof(help[0]); i++) {
        *count += 1;
        s[L + i] = help[i];
    }
}

