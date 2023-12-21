#include <stdio.h>
#include <stdlib.h>

#include "item.h"
#include "insert.h"

extern void sort(Item *a, int lo, int hi);

int main(int arg, char** args){
    int n = atoi(args[1]);

    int* a = (int*)malloc(n*sizeof(int));

    // printf("Insira o array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    sort(a, 0, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);

    return 0;
}