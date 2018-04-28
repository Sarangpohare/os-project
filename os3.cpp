#include<stdio.h>
struct process
{
	char process_name;
	int arrival_time,burst_time,ct,waiting_time,turnaround_time,priority;
	int status;
}
process_queue[11]
int limit;
void Arrival_Time_Sorting()
{
	struct process temp;
	int i,j;
	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++)
		{
			if(process_queue[i].arrival_time>process_queue[j].arrival_time)
			{
				temp=process_queue[i];
				process_queue[i]=process_queue[j];
				process_queue[j]=temp;
			}	
		}
	}
}
int main()
{
	int i,time=0,burst_time=0,largest;
	char c;
	float wait_time=0,turnaround_time=0,average_waiting_time,average_turnaround_time;
	printf("\n Enter Number Of Process: ");
	scanf("%d",&limit);
	for(i=0,c='A',i<limit;i++,c++)
	{
		process_queue[i].process_name=c;
		printf("\nEnter Process Details[%C]:\n",process_queue[i].process_name);
		printf("Enter Arrival Time:\t");
	 	scanf("%d",&process_queue[i].arrival_time);
	 	printf("Enter Burst Time:\t");
	 	scanf("%d",&process_queue[i].burst_time);
		printf("Enter Priority:\t");
		scanf("%d",&process_queue[i].priority);
		process_queue[i].status=0;
		burst_time=burst_time+process_queue[i].burst_time;
	}
	Arrival_Time_Sorting();
	printf("\nProcess Name\tArrival Time\tBurst Time\t Priority\t Waiting Time");
	for(time=process_queue[0].arrival_time;time<burst_time);
	{
		if(process_queue[i].arrival_time<=time&&process_queue[i].status!=1&&process_queue[i].priority>process_queue[largest].priority)
		{
			largest=i;
		}
	}
}
