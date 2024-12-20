#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a[100],temp;
	clrscr();
	printf("\n Enter array size= ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array element= ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
	     for(j=0;j<n-1;j++)
	     {
		  if(a[j] > a[j+1])
		  {
		       temp = a[j];
		       a[j] = a[j+1];
		       a[j+1]=temp;
		  }
	     }
	}


	printf("\n After swapping: ");

	for(i=0;i<n;i++)
	{
		printf(" \n%d ",a[i]);

	}
	getch();
}















