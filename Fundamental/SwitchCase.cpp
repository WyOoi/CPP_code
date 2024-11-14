#include<stdio.h>

main()
{
	int selection;
	float series,parallel,C1,C2,C3;
	printf("\n Enter the value of C1:");
	scanf("%f",&C1);
	printf("\n Enter the value of C2:");
	scanf("%f",&C2);
	printf("\n Enter the value of C3:");
	scanf("%f",&C3);
	printf("\n1:Series Circuit");
	printf("\n2:Parallel Circuit");
	printf("\n Please select your choice:");
	scanf("%d",&selection);
	
	switch(selection)
	{
		case 1:
			series=1/(1/C1 + 1/C2 + 1/C3 );
			printf("The total capacitance of series circuit is %f",series);break;
		
		case 2:
			parallel=C1+C2+C3;
			printf("The total capacitance of parallel circuit is %f",parallel);break;
		
		default:
			printf("wrong choice \n");
	}
	return 0;
}
