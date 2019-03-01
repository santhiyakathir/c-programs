#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,l;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
a[i]=a[i]+3;
}
printf("%s",a);
return 0;
}
