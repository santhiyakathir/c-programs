#include<stdio.h>
int main()
{
char a[100];
int c=0,i=0;
scanf("%s",a);
while(a[i]!='\0')
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
printf("not");
}
return 0;
}
