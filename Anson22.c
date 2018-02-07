#include <stdio.h>
int main()
{
	int count=0,i;
	char ch[100];
	printf(" enter the string \n");
	scanf("%s",ch);
	for(i=0;ch[i]!=NULL;i++)
	{
	count=count+1;
	}
	printf("%d",count);
	return 0;
}
