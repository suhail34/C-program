#include <stdio.h>
#include <string.h>
int top = -1, size = 50, i;
char elem, string[100], stack[100];

void push(char elem)
{
    if (size == top + 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = elem;
        printf("Pushed %c\n", elem);
    }
}

void pop()
{
    if (strlen(string) == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped %c\n", string[i]);
        top--;
    }
}

int main()
{
    printf("Enter the Expression : \n");
    scanf("%s", string);
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == '(')
        {
            push(string[i]);
        }
        else if (string[i] == ')')
        {
            pop();
        }
    }
    if (top == -1)
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Unbalanced\n");
    }

    return 0;
}