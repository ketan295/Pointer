#include<stdio.h>

main()

{
	int a[5]={1,2,3,4,5};
	int *p=&a;
	int i;
	printf("Origianl value of array is :\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",*(p+i));
	}
	
	printf("Value after square of each element in array :\n");
	
	for(i=0;i<=4;i++)
	{
		printf("%d\n",*(p+i) * *(p+i));	  	
	}
}
