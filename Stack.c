#include<stdio.h>
int n;
void push (int a[10],int info, int &top)
{
	if(top==n-1)
		cout<<"Data has overflown\n";
	else
	{
		top++;
		a[top]=info;
	}
}
void pop(int a[10],int &top)
{
	if(top==-1)
		{
			cout<<"Data has underflown\n";
		}
	else
	{
		item=a[top];
		printf("\nPopped item is %d",item)
		top--;
	}
}
void main()
{
	int top=-1, a[10], info;
	char y='y';
	int ch;
	printf("Enter the no of characters ");
	scanf("%d",&n);
	while(y=='y'||y=='Y')
	{
		printf("      Menu\n1 Push\n2 Pop\nEnter Your choice");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter info to push");
			scanf("%d",&info);
			push(a,info,top);
		}
		else if(ch==2)
		{
			pop(a,top);
		}
		else printf("Invalid choice");
		printf("Would you like to continue (y/n)");
		scanf("%c",&y);
	}
}