#include<stdio.h>
void main()
{
	int frag[10],b[10],f[10],i,j,nb,nf,temp,low=1000;
	static int bf[10],ff[10];
	printf("\nEnter the number of blocks:");
	scanf("%d",&nb);
	printf("\nEnter the size for %d blocks:\n",nb);
	for(i=1;i<=nb;i++)
	{
		printf("Enter the size of Block %d: ",i);
		scanf("%d",&b[i]);
	}
	printf("\nEnter the number of processes:");
	scanf("%d",&nf);
	printf("Enter the size of %d processes:\n",nf);
	for(i=1;i<=nf;i++)
	{
		printf("Enter the size of process  %d:",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(bf[j]!=1)
			{
				temp=b[j]-f[i];
				if(temp>=0)
				if(low>temp)
				{
					ff[i]=j;
					low=temp;
				}
			}
		}
		frag[i]=low;
		bf[ff[i]]=1;
		low=1000;
	}
	printf("\nAllocation of blocks using Best fit is as follows\n");
	printf("\nProcess:\tProcess Size\tBlock_no:\tBlock_size:");
	for(i=1;i<=nf;i++)
	printf("\n%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]]);
printf("\n");
}
