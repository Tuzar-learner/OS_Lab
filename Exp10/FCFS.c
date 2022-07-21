#include<stdio.h>
void main()
{
	int tr[20],cr,n,i,sum=0,new;
	printf("Enter the number of tracks : ");
	scanf("%d",&n);
	printf("Enter the head pointer position  : ");
	scanf("%d",&cr);
	printf("Enter the tracks to be traversed : ");
	for(i=0;i<n;i++)
	{
		new = 0;
		scanf("%d",&tr[i]);
		new=cr-tr[i];
		if(new<0)
		{
			new=tr[i]-cr;
		}
		cr=tr[i];
		sum=sum + new;
	}
	printf("Traversed order : ");
	for(i=0;i<n;i++)
	{
		printf("%d",tr[i]);
		if(i!=n-1)
			printf(" => ");
	}
 	printf("\nTotal head movements : %d\n",sum);
}
