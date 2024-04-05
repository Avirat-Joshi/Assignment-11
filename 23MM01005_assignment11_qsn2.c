#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1000
char stack[MAX_SIZE];
int top=-1;
char* rd(char *s)
{
    top=0;
    stack[top++]=s[0];
    while(*(++s)!='\0')
    {
        if(top==0 || stack[top-1]!=*s)
            stack[top++]=*s;
        else
            top--;
    }
    char *final=malloc(sizeof(char)*(top+1));
    for(int i=0;i<top;i++)
    {
        final[i]=stack[i];
    }
    final[top]='\0';
    return final;
}
int main()
{   
    printf("Enter a string: ");
    char s[MAX_SIZE];
    gets(s);
    printf("Output: %s",rd(s));
    return 0;
}