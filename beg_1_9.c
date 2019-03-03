#include<stdio.h>
#include<string.h>
int main()
{
int n,a[100],k,sum=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
