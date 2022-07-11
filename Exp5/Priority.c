#include<stdio.h> 
int main()
{
    int BT[20], P[20], WT[20], TAT[20], Pr[20], i, j, num, total = 0, pos, temp;
    float avg_WT, avg_TAT;
    printf("Enter Number of Process:");
    scanf("%d", &num);
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<num;i++)
    {
	     printf("Burst Time of process %d: ",i+1);
	     scanf("%d",&BT[i]);
	     printf("Priority:");
	     scanf("%d",&Pr[i]);
	     P[i]=i+1;          
    }
    for(i=0;i<num;i++){
    	pos=i;
    for(j=i+1;j<num;j++)
    {
    	if(Pr[j]<Pr[pos])
        pos=j;
    }
    temp=Pr[i];
    Pr[i]=Pr[pos];
    Pr[pos]=temp;
    temp=BT[i];
    BT[i]=BT[pos];
    BT[pos]=temp;
    temp=P[i];
    P[i]=P[pos];
    P[pos]=temp;}
    WT[0]=0; 
    for(i=1;i<num;i++)
    {
    	WT[i]=0;
    	for(j=0;j<i;j++)
    		WT[i]+=BT[j];
    	total += WT[i];
    }
    avg_WT = (float)total/num;
    total = 0;
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<num;i++)
    {
    	TAT[i]=BT[i]+WT[i];
    	total+=TAT[i];
    	printf("\n%d\t\t%d\t\t%d\t\t%d", P[i], BT[i], WT[i], TAT[i]);
    }
    avg_TAT=(float)total/num;
    printf("\nAverage Waiting Time = %.2f", avg_WT);
    printf("\nAverage Turnaround Time = %.2f\n", avg_TAT);
    return 0;
    }
