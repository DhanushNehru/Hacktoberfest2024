#include <stdio.h>
#include <string.h>
#define MAX 10
int stk[MAX];
int top = -1;

void push(char c)
{
    if (top == (MAX - 1))
        printf("Stack Overflow\n");
    else
    {
        top = top + 1;
        stk[top] = c;
    }
}
char pop()
{
    if (top == -1)
        printf("\n Stack Underflow");
    else
        return (stk[top--]);
}
int main()
{
    char exp[MAX], temp;
    int flag = 1;
    printf("Enter an expression : ");
    gets(exp);
    printf("%s", exp);
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            if (top == -1)
                flag = 0;
            else
            {
                temp = pop();
                if (exp[i] == ')' && (temp == '}' || temp == ']'))
                    flag = 0;
                if (exp[i] == '}' && (temp == ']' || temp == ')'))
                    flag = 0;
                if (exp[i] == ']' && (temp == ')' || temp == '}'))
                    flag = 0;
            }
    }
    if (top >= 0)
    {
        flag = 0;
    }
    if (flag == 0)
        printf("Invalid");
    else
        printf("Valid");
    return 0;
}
