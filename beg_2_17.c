#include<stdio.h>
#include<math.h>
int main()
{
int n, t1, t2, count=0,sum=0,rem=0;
scanf("%d",&n);
t1=n;
t2=t1;
while(t1>0)
{
t1=t1/10;
count++;
}
while(t2>0)
{
rem=t2%10;
sum=sum+pow(rem,count);
t2=t2/10;
}
if(sum==n)
{
printf("anagram");
}
else
{
printf("not");
}
return 0;
}
