#include<stdio.h>
#include<conio.h>
void main 
{
int i,n,fact=1;
scanf("%d",&n);
for (i=n;i>0;i--)
{
fact=fact*i;
}
printf("%d",fact);
getch();
}
