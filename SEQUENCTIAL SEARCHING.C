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
		printf("Enter array element= ");
		scanf("%d",&a[i]);
	}

	printf("\n Enter element to be serched: ");
	scanf("%d",&ele);

	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			printf("\nYour element %d is at position %d",ele,i);
			flag=1;
		}
	}

	if(flag==0)
	{
		printf("\nNO SUCH ELEMENT AVAILABLE IN ARRAY: ");
	}

	getch();
}






