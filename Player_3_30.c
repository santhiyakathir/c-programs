#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i,k,c=0;
scanf("%s",a);
scanf("%s",b);
scanf("%d",k);
for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
{
if(a[i]!=b[i])
{
c++;
}
}
if(c==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
