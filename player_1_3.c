#include<stdio.h>
#include<conio.h>
void main()
{
int n, i, a, sum=0;
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum=sum*10+a;
n=n/10;
}
printf("%d",sum);
getch();
}
