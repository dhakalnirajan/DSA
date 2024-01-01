
// Creating a Node in C

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};


int main(){
    struct Node *head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 45;
    head->link = NULL;
    printf("%d", head->data);                // Output: 45
    return 0;
}