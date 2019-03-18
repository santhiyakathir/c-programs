#include<stdio.h>
int main()
{
int n, k, sum=1;
scanf("%d",&n);
scanf("%d",&k);
while(k!=0)
{
sum=sum*n;
k--; 
}
printf("%d",sum);
return 0;
}
