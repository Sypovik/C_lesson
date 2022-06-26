#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head){
    node_t * current = head;

    while(current!=NULL){
        printf("ссылка current: %p\nссылка head:%p\nval: %d\n\n",current,head,current->val);
        current=current->next;
    }
}

int main (void){
    node_t * head = NULL;
    head = malloc(sizeof (node_t));

    if(head ==NULL)
        return 1;

    head->val = 1;
    head->next = NULL;

    head->next = malloc(sizeof(node_t));
    head->next->val=2;
 
    head->next->next = malloc(sizeof(node_t));
    head->next->next->val=3;
    
    head->next->next->next = NULL;

    print_list(head);   
    return 0;
}
