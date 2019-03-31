#include<stdio.h>
int main()
{
int a[100],c=0,i=o
scanf("%s",a);
while(a[i]!=0)
{
if(a[i]=='(')
{
c++;
}
if(a[i]==')')
{
c--; 
}
i++;
}
if(c==0)
{
printf("balanced");
}
else
{
printf("not"):
}
return 0;
}
