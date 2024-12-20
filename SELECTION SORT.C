#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,temp,small,a[100];
	clrscr();
	printf("enter array size : ");
	scanf("%d",&n);

	  for(i=0;i<n-1;i++)
	  {
		  printf("enter arrray element: " );
		  scanf("%d",&a[i]);
	  }

	  for(i=0;i<n;i++)
	  {
		small=i;

	     for(j=i+1;j<n;j++)
	     {
		  if(a[j] > a[small])
		  {
		      small=j;
		  }

		  if(small!=i)
		  {
		      temp=a[small];
		      a[small]=a[j];
		      a[j]=temp;
		  }
	     }
	 }
	 getch();
}
























