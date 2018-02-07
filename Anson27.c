#include<stdio.h>
int main()
{
 char str;  
 char*s=str;
 int alphabet,digits,a;
 printf("\n Enter the string");
 scanf("s",&s);
 while(*s)
 {
 if((*s>='a'&&*s<='z')||(*s>='A'&&'Z'))
 alphabet++;
 else if(*s>='0'&& *s<='9')
  digits++;
  else
  a++;
  printf("%d\n" a);
 }
}
