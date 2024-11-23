#include<stdio.h>
int main()
{
	float bs,hrs,da,gs;

	printf("enter basic salary\n");
	scanf("%f",&bs);
	hrs=bs*(20.00/100.00);
	gs=bs*(40.00/100.00);
	
	gs=bs+hrs+da;
	printf("gross salary=%f\n",gs);
	return 0;
}

