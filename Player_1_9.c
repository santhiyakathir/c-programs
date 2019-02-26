include <stdio.h>
include <condo.h>
void main()
{
int a,b,i,j,count=0,flag=0;
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j!=0)
{
count=0;
}
else
{
count=1;
break; 
}
}
if (count==0)
{
flag++;
}
}
printf ("%d",flag);
getch();
}
