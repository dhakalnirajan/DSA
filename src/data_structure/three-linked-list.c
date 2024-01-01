// Program to Create Linked List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;
    return 0;

    struct node *new = malloc(sizeof(struct node));
    new->data = 3;
    new->link = NULL;
    current->link = new;
    return 0;
}