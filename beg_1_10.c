#include<stdio.h>
#include<string.h>
int main()
{
int a[100],i,count=0;
for(i=0;a[i]!='\0';i++)
{
scanf("%d",&a[i]);
}
for(i=0;a[i]!='\0';i++)
 {
  count++;
 }
printf("%d",count);
return 0;
 }
