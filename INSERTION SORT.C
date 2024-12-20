#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100],changes,j,temp;
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
	      temp=a[i];
	      changes=0;

		   for(j=i-1;j>=0;j--)
		   {
			if(temp<a[j])
			{
			    a[j+1]=a[j];
			    a[j]=temp;
			    changes++;
			}
			   if(changes==0)
			   {
			       break;
			   }
		   }
	  }

	  printf("sorting values are: ");

	  for(i=0;i<n;i++)
	  {
	       printf("\t%d",a[i]);
	  }

	  getch();
}
