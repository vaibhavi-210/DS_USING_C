#include<stdio.h>
#include<conio.h>
void insert();
void delet();
void display();
struct node
{
	int no;
	struct node *next;
	struct node *prev;
}*f=NULL,*r=NULL;
void main()
{
	int ch;
	clrscr();
	do
	{
	     printf("\n 0..Exit");
	     printf("\n 1...Insert");
	     printf("\n 2...Delete");
	     printf("\n 3...Display");
	     printf("\n enter your choice: ");
	     scanf("%d",&ch);

	     switch(ch)
	     {
		 case 0:
			 exit();


		  case 1:
			 insert();
			 break;

		  case 2:
			 delet();
			 break;

		  case 3:
			 display();
			 break;

		  default:
			 printf("\n Wrong choice.");

	     }
	}while(ch!=0);
	getch();
}

void insert()
{
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));

	printf("\n enter value=");
	scanf("%d",&n->no);

	if(f==NULL)
	{
		f=r=n;
		f->prev=NULL;
		f->next=NULL;
	}
	else
	{
		n->prev=r;
		r->next=n;
		r=n;
		r->next=NULL;
	}
}

void display()
{
	int num;
	struct node*i;
	if(f==NULL)
	{
		printf("\n linked list is empty");
	}
	else
	{
		printf("\n enter value 1 or 2=");
		scanf("%d",&num);
		if(num==1)
		{
			i=f;
			while(i!=NULL)
			{
				printf("\n %d",i->no);
				i=i->next;
			}
		 }
		 else if(num==2)
		 {
			i=r;
			while(i!=NULL)
			{
				printf("\n %d",i->no);
				i=i->prev;
			}
		 }
	}
 }

 void delet()
 {
	int num;
	struct node*i;
	struct node*j;
	if(f==NULL)
	{
		printf("\n empty");
	}
	else
	{
		printf("\n enter value=");
		scanf("%d",&num);
		if(f->no==num)
		{
			if(f->next==NULL)
			{
				f=r=NULL;
			}
			else
			{
				f=f->next;//it will give f to next node
				f->prev=NULL;//now totaly first node delete
			}
		 }
		 else
		 {
			i=f;
			while(i->next!=NULL && i->no!=num)
			{
				j=i;
				i=i->next;
				if(i->no==num && i!=r)
				{
					j->next=i->next;
					i=i->next;
					i->prev=j;
				}
				if (i->no==num && i==r)
				{
					r=j;
					r->next=NULL;
				 }
			}
		   }
	   }
}

