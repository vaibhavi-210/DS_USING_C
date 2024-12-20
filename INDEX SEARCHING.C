#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,ind,a[100];
	clrscr();
	printf("\n Enter array size= ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array element= ");
		scanf("%d",&a[i]);
	}

	printf("\n Enter index value to be serched: ");
	scanf("%d",&ind);

	if(ind > n)
	{
		printf("\nYou have entered wrong index");
	}
	else
	{
		printf("\n The element at index %d is %d",ind,a[ind]);
	}

	getch();
}
