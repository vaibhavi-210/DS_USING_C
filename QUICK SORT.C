#include<stdio.h>
#include<conio.h>
// there is use of function bcz there is a use of recursion in this program.
void quicksort(int[],int,int);
void main()
{
	int i,n,a[100];
	clrscr();
	printf("\n Enter array size= ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array element= ");
		scanf("%d",&a[i]);
	}

	quicksort(a,0,n-1); //function calling

	printf("\n After swapping: ");

	for(i=0;i<n;i++)
	{
		printf(" \n%d ",a[i]);

	}
	getch();
}

void quicksort(int a[],int first, int last)
{
	int low,high,pivot,temp; /* all the values which are declared in
	this line are in array. */

	low=first;/* ( in these two lines there are use of two extra var
	   bcz the value of high and low are change again and again.) */

	high=last;

	pivot=(low+high)/2; //pivot will give middle value


	while(low <= high) // here consider the index number not value.
	{

	    while(a[low] < a[pivot])//here consider index value.
	    {
		low++; //low's index number will be increas.
	    }

	    while(a[high] > a[pivot])
	    {
		  high--;
	    }

	    if(low<=high) /*if the index number of high is greater than
		    low than the both index value will be exchange. */
	    {
		  temp=a[low];
		  a[low]=a[high];
		  a[high]=temp;
		  low++;
		  high--;
	    }
	}
	   /* remember that first and last both index are not changed entire
	     the program first have 0 number index and last have n number of
	     index ,and high and low have changed their real index number.*/

	    if(first < high)
	    {
		 quicksort(a,first,high); /* here the function will call and
		   it will take that parameters which u have declared here.*/
	    }

	    if(low < last)
	    {
		 quicksort(a,low,last);
	    }

}



















