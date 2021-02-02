#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
void Create(int x);
void Print();
void Insert(int data, int n);

int main()
{
    int k;

    printf("\nEnter how many numbers : ");
    int n, i, x, data, l;
    scanf("%d", &n);
    printf("%d\n", n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the number : ");
        scanf("%d", &x);
        printf("%d\n", x);
        Create(x);
        Print();
    }
    do
    {
        printf("\nEnter the data and position to be inserted : \n");
        scanf("%d %d", &data, &n);
        Insert(data, n);
        Print();
        printf("\nDo you want to continue [1-y/2-n]:");
        scanf("%d", &k);
        printf("%d", k);

    } while (k == 1);

    return 0;
}

void Create(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    struct Node *temp = head;
    printf("List is :");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("Null");
}
void Insert(int data, int n)
{
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
