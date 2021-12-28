#include <stdio.h>
#include "sort_compare.h"

int main(void){
    int arr1[] = {9,3,2,6,8,5,4,1};
    // 1. 插入排序
    insertion_sort(arr1,8);
    printf("1. 插入排序:");
    for (int i = 0; i < 8; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    // 2. 希尔排序
    // 3. 冒泡排序
    int arr3[] = {9,3,2,6,8,5,4,1};
    bubble_sort(arr3, 8);
    printf("3. 冒泡排序:");
    for (int i = 0; i < 8; i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");
    // 4. 快速排序
    // 5. 选择排序
    int arr5[] = {9,3,2,6,8,5,4,1};
    bubble_sort(arr5, 8);
    printf("5. 选择排序:");
    for (int i = 0; i < 8; i++){
        printf("%d ",arr5[i]);
    }
    printf("\n");
    void selection_sort(int s[], int n);
    // 6. 堆排序
    // 7. 归并排序
    return 0;
}