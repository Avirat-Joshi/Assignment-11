#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int top = -1;
char stack[MAX_SIZE];
void push(char data)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Overloading stack\n");
        return;
    }
    top++;
    stack[top] = data;
}
char pop()
{
    if (top == -1)
    {
        printf("No element in stack\n");
        return '\0';
    }
    char data = stack[top];
    top--;
    return data;
}
int main()
{
    printf("Enter a string: ");
    char str[100];
    gets(str);
    int len = strlen(str);
    if (strlen(str) == 1)
    {
        printf("Reversed string is: %s", str);
        return 0;
    }
    for (int j = 0; j < len; j++)
    {
        push(str[j]);
    }
    int i;
    char new[MAX_SIZE];
    for (i = 0; i < len; i++)
    {
        new[i] = pop();
    }
    new[len ] = '\0';
    printf("Reversed string is: %s", new);
    return 0;
}