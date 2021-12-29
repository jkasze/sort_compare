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
#define N_MAX 1000000

// 1. 插入排序
long insertion_sort(int s[],int n);
// 2. 希尔排序
long shell_sort(int s[], int n);
// 3. 冒泡排序
long bubble_sort(int s[], int n);
// 4. 快速排序
long quick_sort(int s[], int n);
// 5. 选择排序
long selection_sort(int s[], int n);
// 6. 堆排序
long heap_sort(int s[], int n);
// 7. 归并排序
long merge_sort(int s[], int n);


long sort_count(int k);
#endif /* SORT_COMPARE_H__ */
