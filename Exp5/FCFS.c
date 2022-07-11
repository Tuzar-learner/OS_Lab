#include<stdio.h>
int main()
{
	int num,i,CT=0,AvgTAT=0,AvgWT=0;
	printf("Enter the number of processes: ");
	scanf("%d",&num);
	int BT[num],WT[num],TAT[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the burst time of process %d: ",i+1);
		scanf("%d",&BT[i]);
	}
	for(i=0;i<num;i++)
	{
		CT=CT+BT[i];
		TAT[i]=CT;
		AvgTAT=AvgTAT+TAT[i];
		WT[i]=TAT[i]-BT[i];
		AvgWT=AvgWT+WT[i];
	}
	printf("\nProcess No\tBurst Time\tTurn Around Time\tWaiting Time\n");
	for(i=0;i<num;i++)
	{
		printf("  P%d\t\t  %d\t\t  %d\t\t\t  %d\n",i+1,BT[i],TAT[i],WT[i]);
	}
	AvgTAT=AvgTAT/num;
	AvgWT=AvgWT/num;
	printf("\n\nThe average turn around time: %d ms",AvgTAT);
	printf("\nThe average waiting time    : %d ms\n",AvgWT);
		
}
