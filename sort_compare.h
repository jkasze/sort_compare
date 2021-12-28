#ifndef SORT_COMPARE_H__
#define SORT_COMPARE_H__
#include "utils/utils.h"
#include <stddef.h> /* NULL */

// 1. 插入排序
void insertion_sort(int s[],int n);
// 2. 希尔排序
void shell_sort(int s[], int n);
// 3. 冒泡排序
void bubble_sort(int s[], int n);
// 4. 快速排序
void quick_sort(int s[], int l, int r);
// 5. 选择排序
void selection_sort(int s[], int n);
// 6. 堆排序
void heap_sort(int s[], int n);
// 7. 归并排序
void merge_sort(int s[], int L, int R);

#endif /* SORT_COMPARE_H__ */
