#include<stdio.h> 
int fr[10];
void main() 
{
	int i,j,size;
	printf("Enter the number of pages: ");
	scanf("%d",&size);
	int page[size];
	printf("Enter the value of pages: \n");
	for(i=0;i<size;i++)
	{
		printf("Enter the page %d: ",i+1);
		scanf("%d",&page[i]);
	}
	int flag1=0,flag2=0,pf=0,frsize,top=0; 
	printf("Enter the number of frames: ");
		scanf("%d",&frsize);
	for(i=0;i<frsize;i++)
		fr[i]=-1;
	for(j=0;j<size;j++) 
	{
		flag1=0; 
		flag2=0; 
		for(i=0;i<size;i++) 
		{
			if(fr[i]==page[j]) 
			{
				flag1=1; 
				flag2=1; 
				break; 
			}
		}
		
		if(flag1==0) 
		{
			for(i=0;i<frsize;i++) 
			{
				if(fr[i]==-1)
				{
					fr[i]=page[j]; 
					flag2=1; 
					break; 
				}
			}
		}
		if(flag2==0) 
		{
			fr[top]=page[j]; 
			top++;
			pf++;
			if(top>=frsize) 
				top=0; 
		}
		printf("\n"); 
		for(i=0;i<frsize;i++)
			printf("%d\t",fr[i]);
	}
	printf("\nNumber of page faults : %d\n",pf+frsize);
}
