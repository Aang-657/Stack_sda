#include "stack.h"

Node* createstack(int data){
    return createNode(data);
}
void push(stack *S, Node *NewNode){
    insertAwal(&(*S), NewNode);
}
void pop(stack *S){
    deleteAwal(&(*S));
}

void turnintobinary(int x, LinkedList *Top){
    if (x != 0){
        Node *Stck = createstack(x%2);
        push(Top, Stck); 
        turnintobinary(x/2, Top);
    }
}

void popandprint(LinkedList *Top){
    while (Top->head != NULL ){
        printf("%d", Top->head->data);
        pop(Top);
    }
    printf("\n");
}