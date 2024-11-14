#include<stdio.h>

int main()
{
	int i=1,mark,average,sum;
	sum=0;
	do
	{
		printf("Enter mark of subject %d:",i);
		scanf("%d",&mark);
	    
	    sum=sum+mark;
		i++;
    
	}while(i<=7);
printf("Sum:%d",sum);
average=sum/7;
printf("\n Average:%d",average);
	return 0;
}
