#include<stdio.h>

struct process
{
int pid;
int bt; 
int wt,tt;
}p[10];
a[]={0,0,0,0};
int main()
{
int i,n,totwt,tottt,avg1;
float avg2;
printf("enter the no of process=\n",&n); 
scanf("%d",&n);
for(i=1;i<=n;i++)
   {   
    p[i].pid=i;
    printf("enter the burst time=\n"); 
    scanf("%d",&p[i].bt); 
    }
p[1].wt=0;
p[1].tt=p[1].bt+p[1].wt;
i=2;
while(i<=n)
{
p[i].wt=p[i-1].bt+p[i-1].wt;
p[i].tt=p[i].bt+p[i].wt;
i ++;
}
i=1;

totwt=tottt=0;
printf("\n processid\t   AT\t    BT\t    FT\t    TUT\t    WT\n");
 
while(i<=n)
{
printf("\n\t%d       \t%d     \t%d   \t%d    \t%d    \t%d",p[i].pid,a[0],p[i].bt,p[i].tt,p[i].tt,p[i].wt);
totwt=p[i].wt+totwt;
tottt=p[i].tt+tottt;
i++;
}
avg1=totwt/n;
avg2=tottt/n; 
printf("\n");
printf("\nAverage waiting time=%d\t Average turnaround time=%f\t",avg1,avg2); 
return 0;
}



