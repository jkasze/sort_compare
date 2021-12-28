#include <stdio.h>
#include "sort_compare.h"

int main(void){
    int arr1[] = {9,3,2,6,8,5,4,1};
    // 1. 插入排序
    insertion_sort(arr1,sizeof(arr1)/sizeof(arr1[0]));
    printf("1. 插入排序:");
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    // 2. 希尔排序
    int arr2[] = {9,3,2,6,8,5,4,1};
    bubble_sort(arr2, 8);
    printf("3. 希尔排序:");
    for (int i = 0; i < 8; i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
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
    int arr6[] = {9,3,2,6,8,5,4,1};
    bubble_sort(arr6, 8);
    printf("6. 堆排序  :");
    for (int i = 0; i < 8; i++){
        printf("%d ",arr6[i]);
    }
    printf("\n");
    // 7. 归并排序
    int arr7[] = {9,3,2,6,8,5,4,1};
    merge_sort(arr7, 0, 7);
    printf("7. 归并排序:");
    for (int i = 0; i < 8; i++){
        printf("%d ",arr7[i]);
    }
    printf("\n");
    return 0;
}