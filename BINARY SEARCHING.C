#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,ele,flag=0,a[100];
	clrscr();
	printf("\n Enter array size= ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array element a[%d]= ",i);
		scanf("%d",&a[i]);


	    if(i>0)
	    {
	       if(a[i-1]>a[i])
	       {
		  printf("\n Number should be greater than previous value");
		  getch();
		  break;
	       }
	    }
	}

	printf("\n Enter element to be serched: ");
	scanf("%d",&ele);

	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
		     printf("\nYour element %d is at position %d",ele,i);
		     flag++;
		}
	}

	if(flag==0)
	{
		printf("\nElement not found");
	}

	getch();
}
