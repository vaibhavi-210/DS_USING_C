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
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));

	printf("\n enter value=");
	scanf("%d",&n->no);

	if(f==NULL)//if user enter first ele
	{
		f=r=n;//f & r store user value through n
		f->prev=f;
		f->next=f;
	}
	else //when it's not first ele to add
	{
		n->prev=r;
		r->next=n;
		r=n;
		r->next=f;
		f->prev=r;
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
			do
			{
				printf("\n %d",i->no);
				i=i->next;
			}while(i!=f);
		 }
		 else if(num==2)
		 {
			i=r;
			do
			{
				printf("\n %d",i->no);
				i=i->prev;
			}while(i!=r);
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
		       /*here we give f to second node and then give NULL
		       to new f(second node) so first node will be deleted*/
			{
				f=f->next;
				f->prev=r;
				r->next=f;
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
				      r->next=f;
				      f->prev=r;
				}
			}
		   }
	   }

}

