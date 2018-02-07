#include<stdio.h>
#include<conio.h>
void main()
{
int g[10],i,gre,l;
printf("\n enter the limit");
scanf("%d",&l);
printf("enter the values:");
for(i=0;i<l;i++)
{
scanf("%d",&g[i]);
}
gre=g[0];
for(i=0;i<l;i++)
{
if(a[i]>gre)
{
gre=g[i];
}
}
printf("greatest no is %d",gre);
getch();
}
