#ifndef SORT_COMPARE_H__
#define SORT_COMPARE_H__
#include "utils/utils.h"
#include <stddef.h> /* NULL */
#include <stdlib.h> /* rand();srand(); */
#include <time.h>   /* time() */
#include <stdio.h>  /* printf() */

#define M_MAX 20
#define M_MIN 5
#define N_MIN 10000
#define N_MAX 100000

// 1. 插入排序
int insertion_sort(int s[],int n);
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
