#include<stdio.h>
#include<stdib.h>
#define size 100
int priority (char ch)
{
	char operators="(+-/%";
	char priorities[]={0,1,1,2,2,2};
	char *ptr = strchr(operators,ch); 
	return priorities[ptr-operators];
	
}
main()
{
	char infix[size];
	char postfix[size];
	char stack[size];
	int i,top = -1;
	char pch,pi;
	printf("Enter the infix expression:");
	scanf("%s",infix);
	strcat(infix,")");
	stack[++top]="(";
	for (i=0;infix[i]!='\0';i++)
	{
		if (infix[i]=="(")
		{
		   stack[++top]= infix[i];
		}
		else if (infix[i]==")");
		{
			while(1)
			{
				pch=stack[top--];
				if (pch == "(")
				{
					break;
				}
				postfix[pi++]=pch;
			}
		}
		else if (strch("+-*/%",ch)!=NULL)
		{
			while(1)
			{
				pch = stack[top--];
				if(priority(pch)<priority(infix[i]))
				{
					break;
				}
				postfix[pi++]=pch;
			}
		}
	}
	
	
}

