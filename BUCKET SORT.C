#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k,p,r,lrg,digcnt,divsr,a[100];
	int bucktcnt[10],buckt[10][10];
	clrscr();
	printf("\n Enter array size= ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array element= ");
		scanf("%d",&a[i]);
	}

	i=0;
	lrg=a[i];

	while(i<n)
	{
	     if(a[i]>lrg)
	     {
		 lrg=a[i];
		 i++;
	     }
	}

	digcnt=0;
	while(lrg>0)
	{
	      digcnt++;
	      lrg=lrg/10;
	}

	i=1;
	divsr=1;
	while(i<=digcnt)
	{
	     j=0;
	     while(j<10)
	     {
		  bucktcnt[j]=0;
		  j++;
	     }

	     j=0;
	     while(j<n)
	     {
		  r=(a[j]/divsr)%10;
		  buckt[r][bucktcnt[r]]=a[j];
		  bucktcnt[r]++;
		  j++;
	     }

	     j=0;
	     p=0;
	     while(j<10)
	     {
		  k=0;
		  while(k < bucktcnt[j])
		  {
		       a[p]=buckt[j][k];
		       p++;
		       k++;
		  }
		  j++;
	     }
	     i++;
	     divsr = divsr*10;
	}

	printf("\n Sorted array: ");

	for(i=0;i<n;i++)
	{
	     printf("\t%d",a[i]);
	}

	getch();
}


















































