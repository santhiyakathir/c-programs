#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[0]=90)
{
a[0]=a[0]-32;
}
else if(a[i]==" ")
{
if(a[i+1]>90)
  {
  a[i+1]=a[i+1]-32;
  }
  }
	}
	printf("%s",a);
}
	
