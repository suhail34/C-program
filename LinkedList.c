#include <stdio.h>
#include <stdlib.h>
// __DATE__

typedef struct node
{
    int data;
    struct node *next;
} st;

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    /*------pointer types-------*/
    int a = 23;
    float b = 2.3;
    void *ptr;
    ptr = &a;
    printf("the value at the address of ptr pointing towards a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("the value at the address of ptr pointing towards b is %.1f\n", *((float *)ptr));
    int c = 55;
    int *pt = NULL;

    printf("The address of c is %d\n", pt); //As the pointer is null it cannot be dereference
    /*----------------------------*/
    st *head;
    st *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    (*head).data = -12;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 45;
    third->next = NULL;

    linkedlistTraversal(head);

    return 0;
}