#include<stdio.h>

int main()
{
int arr1[100];
int i,n,j,tmp;

printf("\nSort elements of array in ascending order :\n------------------\n");
printf("Input the size of array :");
scanf("%d",&n);
printf("Input %d in the array :\n",n);

for (i=0 ; i<n ; i++)
{
printf("Element %d=",i);
scanf("%d",&arr1[i]);
}
        for (i=0 ; i<n ; i++)
   {
           for (j=i+1 ; j<n ; j++)
              {
                 if (arr1[j] < arr1[i])
                 {
                	tmp = arr1[i];
                	arr1[i] = arr1[j];
                	arr1[j] = tmp;
                 }
              }
   }
printf("\nElements of array sorted in ascending order :\n");
for (i=0 ; i<n ; i++)
{
printf("%d\t",arr1[i]);
}
printf("\n\n");
}
