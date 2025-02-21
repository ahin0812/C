#include<stdio.h>
#include<string.h>
int main()
{
	char *sp="C3coding";
	char str[]="C3coding";
	int res;
	res=strcmp(sp,str);
	printf("%d\n",res);
	res=strcmp(sp,"c3coding");
	printf("%d\n",res);
	res=strcmp("C3coding","c3coding");
	printf("%d\n",res);
	res=strcmp("text","text");
	printf("%d\n",res);
	res=strcmp("text","text");
	printf("%d\n",res);
	return 0;
}
