#include "sort_compare.h"

int main(void){
    srand((unsigned) time(NULL));
    int M = 0;
    while(M < 5 || M > 20){
        M = rand();
    }
    srand((unsigned) time(NULL));
    int N = 0;
    while(N < 10000 || N > 100000){
        N = rand();
    }
    printf("M: %d\n",M);
    printf("N: %d\n",N);
    int numbers[M][N];
    for(int i = 0;i < M; i++){
        for(int j = 0;j < N; j++){
            numbers[i][j] = rand();
        }
    }
    
    long counts[M];
    for(int i = 0;i < M; i++){
        counts[i] = insertion_sort(numbers[i],sizeof(numbers[0]) / sizeof(numbers[0][0]));
    }
    long average = 0;
    for(int i = 0;i < M; i++){
        printf("[count:%d]:%ld\n", i, counts[i]);
        average += counts[i] / M;
    }
    printf("[1.插入排序]:%ld\n", average);
    
    return 0;
}