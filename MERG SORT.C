#include<stdio.h>
#include<conio.h>
int a[100];
void m_sort(int,int);
void merg_sort(int,int,int);
void main()
{
	int i,n;
	clrscr();
	printf("\n Enter array size= ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array element= ");
		scanf("%d",&a[i]);
	}

	m_sort(0,n-1);
	printf("\n Sorted array: ");

	for(i=0;i<n;i++)
	{
	     printf("%d\n",a[i]);
	}

	getch();
}

void m_sort(int low,int high)
{
	int mid;
	if(low!=high)
	{
	     mid=(low+high)/2;
	     m_sort(low,mid);//it will recall till low==mid
	     m_sort(mid+1,high);//it will recall till mid+1==high
	     merg_sort(low,mid,high);
	}
}

void merg_sort(int low,int mid,int high)
{
	int i,j,k,temp[100];
	i=low;
	j=mid+1;
	k=low;

	/*i(low) ni value mid ke mid karta ochi anej(mid+1) ni value high
	 ke high karta ochi*/

	while(i<=mid && j<=high)
	{

      /*i(low) ni vlaue j(mid+1) karta ochi hoy to i(low) ni vlaue temp[k] ma
	ane jo moti hoy j(mid+1) karta to j(mid+1) ni value temp[k] ma muko*/

	     if(a[i]<=a[j])
	     {
		  temp[k]=a[i];
		  i++;
		  k++;
	     }
	     else
	     {
		  temp[k]=a[j];
		  j++;
		  k++;
	     }
	}

	/* a condition ma i ane j na array mahi temp[k] ma je value sort
	thavani baki che ne ene as it is muki dese bcz te sort thayeli
	j hase */

	if(i>mid)//means i e ++ thai ne mid ni agal vai gai hase
	{
	    while(j<=high)/* i ni badhi value put thai gai to have j na baki
			  bachela element ne aa loop temp[k] ma mukse */
	    {
		 temp[k]=a[j];
		 j++;
		 k++;
	    }
	}

	else /* meane i mid karta agal nathi to a part i ni bacheli value
	       temp[k] ma put karse */
	{
	    while(i<=mid)
	    {
		 temp[k]=a[i];
		 i++;
		 k++;
	    }
	}

	for(i=low;i<=high;i++)
	{
	     a[i]=temp[i];
	}

}
































































