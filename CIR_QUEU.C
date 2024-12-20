#include<stdio.h>
#include<conio.h>
#define size 5
int queue[size];
void insert();
void delet();
void display();
int front=0,rear=0;
void main()
{
	clrscr();
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	delet();
	display();
	insert(60);
	display();
	getch();
}

void insert(int ele)
{
	if(front==-1 && rear==size)
	{
	      printf("\n queue is full");
	}
	else if(front==0)
	{
	      front=rear=0;
	      queue[rear]=ele;
	}
	else if(rear==size)
	{
	      rear=1;
	      queue[rear]=ele;
	}
	else
	{
	     rear++;
	     queue[rear]=ele;
	}
}

void delet()
{
	if(front==0)
	{
	      printf("\n queue is empty");
	}
	else if(front==rear)
	{
	      front=rear=0;
	}
	else if(front==size)
	{
	      front=1;
	}
	else
	{
	     front++;
	}
}

void display()
{
	int i;
	if(front==0)
	{
	      printf("queue is empty");
	}
	else if(front > rear)
	{
	      for(i=front;i<=rear;i++)
	      {
		   printf("\n element at %d is %d",i,queue[i]);
	      }
	}
	else
	{
	      for(i=front;i<=rear;i++)
	      {
		   printf("\n element at %d is %d",i,queue[i]);
	      }
	}

}

