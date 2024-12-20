#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N];
void enqueue();
void dequeue();
void display();
void peep();
int front=-1;
int rear=-1;
void main()
{
	clrscr();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	dequeue();
	display();
	peep();
	getch();
}

void enqueue(int x)
{
	if(front==N-1)
	{
	      printf("\n queue is full");
	}
	else if(front==-1 && rear==-1)
	{
	      front=rear=0;
	      queue[rear]=x;
	}
	else
	{
	     rear++;
	     queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
	      printf("\n queue is empty");
	}
	else if(front==rear)
	{
	      front=rear;
	}
	else
	{
	     front++;
	}
}

void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
	      printf("queue is empty");
	}
	else
	{
	      for(i=front;i<=rear;i++)
	      {
		   printf("%d",&queue[i]);
	      }
	}
}

void peep()
{
	if(front==-1 && rear==-1)
	{
	      printf("queue is empty");
	}
	else
	{
	      printf("%d",queue[front]);
	}
}



