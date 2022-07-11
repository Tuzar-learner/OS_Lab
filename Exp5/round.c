#include<stdio.h>
int main()
{
	int i,j,num,BT[10],WT[10],TAT[10],t,ct[10],max;
	float AvgWT=0,AvgTAT=0,temp=0;
	printf("Enter the number of processes: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter Burst Time for process %d: ", i+1);
		scanf("%d",&BT[i]);
		ct[i]=BT[i];
	}
	printf("\nEnter the time slice: ");
	scanf("%d",&t);
	max=BT[0];
	for(i=1;i<num;i++)
		if(max<BT[i])
			max=BT[i];
	for(j=0;j<(max/t)+1;j++)
		for(i=0;i<num;i++)
			if(BT[i]!=0)
				if(BT[i]<=t) {
					TAT[i]=temp+BT[i];
					temp=temp+BT[i];
					BT[i]=0;
				}
				else {
					BT[i]=BT[i]-t;
					temp=temp+t;
				}
	for(i=0;i<num;i++)
	{
		WT[i]=TAT[i]-ct[i]; 
		AvgTAT+=TAT[i];
		AvgWT+=WT[i];
	}
	printf("\n\tProcess\t Burst Time \t Waiting Time\tTurnaround Time\n");
	for(i=0;i<num;i++)
		printf("\t%d \t %d \t\t %d \t\t %d \n",i+1,ct[i],WT[i],TAT[i]);
	printf("\nThe Average Turnaround time is %f",AvgTAT/num);
	printf("\nThe Average Waiting time is %f ",AvgWT/num);
}
