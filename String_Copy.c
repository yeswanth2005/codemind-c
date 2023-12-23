#include<stdio.h>
int main()
{
	char str[20],str1[20];
	int i;
	scanf("%[^
]s",&str);
	for(i=0;str[i]!=NULL;i++)
	{
		str1[i]=str[i];
	}
	printf("%s",str);

}