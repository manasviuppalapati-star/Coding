#include<stdio.h>
#include<string.h>

main()
{
	char symbols[100];
	int top,stack[100];
	char ch,pch;
	int i;
	char leftsymbols[]= "{[(";
	char rightsymbols[]="}])";
	top=-1;
	printf("Enter the series of symbols:");
	scanf("%s",symbols);
	for(i=0;symbols[i]!='\0';i++)
	{
		ch=symbols[i];
		if(strchr("{[(",ch)!=NULL)
		{
			stack[++top]=ch;
		}
		else
		{
			if(top==-1)
			{
				printf("Not balanced.");
				return 0;
			}
			pch=stack[top--];
			//if(strchr(leftsymbols,pch)-leftsymbols!=strch(rightsymbols,ch)-reightsymbols) or
			if((pch=='{' && ch=='}') || (pch=='[' && ch==']') || (pch=='(' && ch==')'))
            {
                printf("Not balanced");
                return 0;
            }
			
		}
	}
	if(top==-1)
	   printf("balanced");
	else
	{
		printf("Not balanced");
	}
}
