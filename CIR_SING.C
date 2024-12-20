#include<stdio.h>
#include<conio.h>
void insert();
void delet();
void display();
struct node
{
	int no;
	struct node *next;
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

	printf("\n Enter value");
	scanf("%d",&n->no);

	if(f==NULL)//only when it's new node
	{
		f=r=n; //here it will print users value
		f->next=f; //this will make first node
	}
	else//when it's regular node
	{
		r->next=n;
		r=n;
		n->next=f;
	}
}

void display()
{
	struct node *i;
	if(f==NULL)
	{
	      printf("\n Link list is empty");
	}
	else
	{
		i=f;
		do{
		      printf("\n%d" ,i->no);
		      i=i->next;
		}while(i!=f);
	}
}

void delet()
{
	int num;
	struct node *i;
	struct node *j;

	if(f==NULL)
	{
		printf("\n empty");
	}
	else
	{
		printf("\n enter value: ");
		scanf("%d",&num);

		if(f->no==num)// front delete
		{
			if(f->next==NULL)
			{
			      f=r=NULL;
			}
			else
			{
			      f=f->next;
			}
		}
		else//middle or last node will delete
		{
			i=f;
			while(i->next!=NULL && i->no!=num)
			{
			      j=i;
			      i=i->next;
			      if(i->no==num && i!=r)//delete middle
			      {
				  j->next = i->next;
			      }

			      if(i->no==num && i==r)//delete last
			      {
				    r=j;
				    r->next=f;
			      }
			}
		}
	}
}
