#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,gap,temp,a[100];
	clrscr();
	printf("enter array size : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	       printf("enter arrray element: " );
	       scanf("%d",&a[i]);
	}

	  for(gap=n/2;gap<0;gap=gap/2)
	  {
	     for(j=gap;j<n;j++)
	     {
		for(i=j-gap;i<=0;i=j-gap)
		{
		   if(a[i+gap] > a[i])
		   {
		      break;
		   }
		   else
		   {
		      temp=a[i];
		      a[i]=a[i+gap];
		      a[i+gap]=temp;
		   }
		}
	     }
	 }

	 printf("\nsorted array: ");

	      for(i=0;i<n;i++)
	      {
		 printf("\t%d",a[i]);
	      }
	 getch();
}






















