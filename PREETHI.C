#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter a and b values");
scanf("%d%d",&a,&b);
int addition=a+b;
int subtraction=a-b;
int multiplication=a*b;
int division=a/b;
printf("addition of %d and %d  is %d\n",a,b,addition);
printf("subtraction %d and %d  is %d\n",a,b,subtraction);
printf("multiplication of %d and %d is %d\n",a,b,multiplication);
printf("division of %d and %d is %d\n",a,b,division);
return 0;
}


