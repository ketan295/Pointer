#include<stdio.h>

main()

{
	int a,b,temp;
	int *p=&a,*p1=&b,*p2=&temp;
	a=10;
	b=20;
	
	printf("Value before swapping :\n");
	printf("\na=%d\n",a);
	printf("b=%d\n\n",b);
	
	
	
	*p2=*p;
	*p=*p1;
	*p1=*p2;
	
	printf("Value after swapping:\n");
	
	printf("\na = %d\n",*p);
	printf("b = %d\n",*p1);
}
