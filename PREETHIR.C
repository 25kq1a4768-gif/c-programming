#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("please enter ano between 1and 5:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("you chose one");
break;
case 2:
printf("you chose two");
break;
case 3:
printf("you choose three");
break;
case 4:
printf("you choose four");
break;
case 5:
printf("you choose five");
break;
default;
printf("invalid chose .enter a number between 1 and 5");
break;
}
}