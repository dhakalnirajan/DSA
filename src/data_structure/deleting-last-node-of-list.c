// Deleting Last Node of the List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    head = del_last(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

struct node *del_last(struct node *head){
    if (head == NULL)
    {
        return NULL;
    }
    else if (head -> link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp -> link -> link != NULL)
        {
            temp2 = temp;
            temp = temp -> link;
        }
        temp2 -> link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}