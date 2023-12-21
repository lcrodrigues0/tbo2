#include <stdio.h>

#include "item.h"
#include "insert.h"

void sort(Item *a, int lo, int hi){
    for(int i = lo + 1; i < hi; i++){
        int j = i;
        
        while(j > lo && less(a[j], a[j - 1])){
            exch(a[j], a[j - 1])
            j--;
        }
    }
}