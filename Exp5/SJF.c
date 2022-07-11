#include<stdio.h>
int main()
{
int num,i,CT=0,AvgTAT=0,AvgWT=0,pos,j,temp;
printf("Enter the number of processes: ");
scanf("%d",&num);
int BT[num],WT[num],TAT[num],p[num];
for(i=0;i<num;i++)
{
printf("Enter the burst time of process %d: ",i+1);
scanf("%d",&BT[i]);
p[i]=i+1;
}
for(i=0;i<num;i++)
{
pos=i;
for(j=i+1;j<num;j++)
{
if(BT[j]<BT[pos])
pos=j;
}
temp=BT[i];
BT[i]=BT[pos];
BT[pos]=temp;
temp=p[i];
p[i]=p[pos];
p[pos]=temp;
}
WT[0]=0;
for(i=0;i<num;i++)
{
CT=CT+BT[i];
TAT[i]=CT;
WT[i]=TAT[i]-BT[i];
AvgTAT=AvgTAT+TAT[i];
AvgWT=AvgWT+WT[i];
}
printf("\nProcess No\tBurst Time\tTurn Around Time\tWaiting Time\n");
for(i=0;i<num;i++)
printf(" P%d\t\t %d\t\t %d\t\t\t %d\n",p[i],BT[i],TAT[i],WT[i]);
AvgTAT=AvgTAT/num;
AvgWT=AvgWT/num;
printf("\n\nThe average turn around time: %d ms",AvgTAT);
printf("\nThe average waiting time : %d ms\n",AvgWT);
}
