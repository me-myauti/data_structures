#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};

typedef struct node Node;

Node *listNodes;

void add(int value){
    Node *n = (Node*) malloc(sizeof(Node));
    n->val = value;
    n->next = listNodes;
    listNodes = n;
}

int main(){
    
    add(1);
    add(2);

    return 0;
}