#include<stdio.h>
#include<conio.h>
void main()
{
int base,expo;
long long result=1;
printf("enter the base num:");
scanf("%d",&base);
printf("enter the expontent:")
scanf("%d",&expo);
while(expo!=0)
{
result*=base;
--expo;
}
printf("answer=%d",result);
getch();
}
