#include "sort_compare.h"
int (*sort_fn[])(int s[], int n) = {
    insertion_sort,
    shell_sort,
    bubble_sort,
    quick_sort,
    selection_sort,
    heap_sort,
    merge_sort,
};


char *sorts[] = {
    "插入排序",
    "希尔排序",
    "冒泡排序",
    "快速排序",
    "选择排序",
    "堆排序  ",
    "归并排序"
};
int main(void){
    srand((unsigned) time(NULL));
    int M = 0;
    while(M < M_MIN || M > M_MAX){
        M = rand();
    }
    srand((unsigned) time(NULL));
    int N = 0;
    while(N < N_MIN || N > N_MAX){
        N = rand();
    }
    printf("M: %d N: %d\n",M, N);

    // 全局
    int numbers[M][N];
    long counts[M];
    long average = 0;
    long res_compare[7];

    for(int i = 0;i < M; i++){
        for(int j = 0;j < N; j++){
            numbers[i][j] = rand();
        }
    }
    long sort_count(int k){
        long average = 0;
        int *sort_k = malloc(sizeof(numbers));
        memcpy(sort_k, numbers, sizeof(numbers));
        for(int i = 0;i < M; i++){
            counts[i] = (*sort_fn[k])(sort_k + i * N,N);
            printf("[%s:count:%d]:%ld\n",sorts[k],i + 1, counts[i]);
            average += counts[i] / M;
        }
        printf("[%d.%s]:%ld\n",k + 1,sorts[k], average);
        free(sort_k);
        return average;
    }
    for(int k = 0; k < 7; k++) {
        res_compare[k] = sort_count(k);
    }
    printf("排序算法结果如下:\n");
    for(int k = 0; k < 7; k++) {
        printf("[%d.%s]:%ld\n",k + 1,sorts[k], res_compare[k]);
    }
    // fast two
    long fastest = res_compare[0] < res_compare[1] ? res_compare[0]:res_compare[1];
    long faster = fastest == res_compare[0] ? res_compare[1] : res_compare[0];
    char *sfastest = fastest == res_compare[0] ? sorts[0] : sorts[1];
    char *sfaster = fastest == res_compare[0] ? sorts[1] : sorts[0];
    
    for(int k = 2; k < 7; k++){
        if(fastest >= res_compare[k]){
            faster = fastest;
            sfaster = sfastest;
            fastest = res_compare[k];
            sfastest = sorts[k];
        } else if(faster >= res_compare[k]){
            faster = res_compare[k];
            sfastest = sorts[k];
        }
    }
    printf("[最好的两个算法]:\n%s 比较次数:%ld\n%s 比较次数:%ld\n",sfastest,fastest,sfaster,faster);
    return 0;
}