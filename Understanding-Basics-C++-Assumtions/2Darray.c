#include <stdio.h>
#include <stdlib.h>
int **arr;
int main(){
    int n, m;
    scanf("%d%d",&n , &m);
    arr = (int **)malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++){
        arr[i] = (int *)malloc(m * sizeof(int));
    }
    return 0;
}