#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i!=0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
