#include<stdio.h>
int main()
{
float dist,time,avgSpeed;
printf("Enter the distance traveled and the time taken \n");
scanf("%d %d",&dist,&time);
avgSpeed=dist/time;
printf("The average Speed is %.2f meters per second",avgSpeed);
}
