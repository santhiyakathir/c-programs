#include<stdio.h>
int main()
{
int n1,n2,num,den,rem,lcm,gcd;
scanf("%d",&n1);
scanf("%d",&n2);
if(n1>n2)
{
num=n1;
den=n2;
}
else
{
num=n2;
num=n1;
}
rem=num%den;
while(rem!=0)
{
num=den;
den=rem;
rem=num%den;
}
gcd=den;
printf("%d",gcd);
return 0;
}
