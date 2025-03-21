#include "stack.h"
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    stack Top;
    initList(&Top);
    int x;
    printf("masukkan bilangan int: ");
    scanf("%d", &x);
    turnintobinary(x, &Top);
    printList(&Top);
    popandprint(&Top);
    printList(&Top);
}