#include "utils.h"
void swap(int s[], int i, int j){
    int tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}