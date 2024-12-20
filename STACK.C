#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
void peep();
int top=-1;
int a[5];
void main()
{
	int ch;
	clrscr();
	do
	{
	     printf("\n 0...Exit");
	     printf("\n 1...Push");
	     printf("\n 2...Pop");
	     printf("\n 3...Display");
	     printf("\n 4...Peep");
	     printf("\n enter your choice: ");
	     scanf("%d",&ch);

	     switch(ch)
	     {
		  case 0:
			 exit();

		  case 1:
			 push();
			 break;

		  case 2:
			 pop();
			 break;

		  case 3:
			 display();
			 break;

		  case 4:
			 peep();
			 break;

		  default:
			 printf("\n Wrong choice.");

	     }

	}while(ch!=0);
	getch();
}

void push()//for add
{
	if(top>=5)
	{
	     printf("\n Stack is   full");
	}
	else
	{
	     top++;
	     printf("\n Enter value: ");

	     scanf("%d",&a[top]);
	}
}

void pop()//for delete
{
	if(top==-1)
	{
	     printf("\n Stack is empty");
	}
	else
	{
	   top--;
	}
}

void display()//show your all commands
{
	int i;

	if(top==-1)
	{
	     printf("\n Stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
		      printf("\n %d",a[i]);
		}
	}
}

void peep()//it will show the value which is on top
{
	if(top==-1)
	{
	     printf("\n Stack is empty");
	}
	else
	{
	     printf("\n %d",top);
	}
}
















