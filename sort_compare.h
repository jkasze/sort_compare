#ifndef SORT_COMPARE_H__
#define SORT_COMPARE_H__
#include "utils/utils.h"
#include <stddef.h> /* NULL */
#include <stdlib.h> /* rand();srand();malloc();qsort(); */
#include <string.h> /* memcpy() */
#include <time.h>   /* time() */
#include <stdio.h>  /* printf() */
#include <assert.h>

#define M_MAX 20
#define M_MIN 5
#define N_MIN 10000
#define N_MAX 100000

// 1. 插入排序
int insertion_sort(int s[],int n);
// 2. 希尔排序
int shell_sort(int s[], int n);
// 3. 冒泡排序
int bubble_sort(int s[], int n);
// 4. 快速排序
int quick_sort(int s[], int n);
// 5. 选择排序
int selection_sort(int s[], int n);
// 6. 堆排序
int heap_sort(int s[], int n);
// 7. 归并排序
int merge_sort(int s[], int n);


long sort_count(int k);
#endif /* SORT_COMPARE_H__ */
