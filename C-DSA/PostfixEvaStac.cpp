#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char postfix[100];
    int stack[100];
    char ch;
  
    int opd1, opd2, i, top;

    top = -1;

    printf("Enter the postfix expression:");
    scanf("%s", postfix);

    for(i = 0; postfix[i] != '\0'; i++)
    {
        ch = postfix[i];

        if(strchr("+-%*/", ch) != NULL)
        {
            opd1 = stack[top--];
            opd2 = stack[top--];

            switch(ch)
            {
                case '+': stack[++top] = opd2 + opd1; break;
                case '-': stack[++top] = opd2 - opd1; break;
                case '*': stack[++top] = opd2 * opd1; break;
                case '/': stack[++top] = opd2 / opd1; break;
                case '%': stack[++top] = opd2 % opd1; break;
            }
        }
        else
            stack[++top] = ch - 48;
    }

    printf("Result:%d", stack[top]);

    return 0;
}
