#include<stdio.h>
int fr[10];
void main()
{
	int index,k,l,flag1=0,flag2=0,pf=0,frsize,size,i,j;
	printf("Enter the number of pages: ");
		scanf("%d",&size);
	int p[size];
	printf("Enter the value of pages: \n");
	for(i=0;i<size;i++)
	{
		printf("Enter the page %d: ",i+1);
		scanf("%d",&p[i]);
	}
	printf("Enter the number of frames: ");
		scanf("%d",&frsize);
	int fs[frsize];
	for(i=0;i<frsize;i++)
		fr[i]=-1;
	for(j=0;j<size;j++)
	{
		flag1=0,flag2=0;
		for(i=0;i<frsize;i++)
		{
			if(fr[i]==p[j])
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
					fr[i]=p[j]; flag2=1; 
					break; 
				}
			}
		}
		if(flag2==0) 
		{
			for(i=0;i<frsize;i++) 
			fs[i]=0;
			for(k=j-1,l=1;l<=frsize-1;l++,k--)
			{
				for(i=0;i<frsize;i++) 
				{
					if(fr[i]==p[k]) 
						fs[i]=1;
				}
			}
			for(i=0;i<frsize;i++) 
			{
				if(fs[i]==0) 
				index=i; 
			}
			fr[index]=p[j]; 
			pf++; 
		}
		int i; printf("\n");
		for(i=0;i<frsize;i++) 
			printf("\t%d",fr[i]);
	}
	printf("\n No of page faults :%d\n",pf+frsize);
}	
