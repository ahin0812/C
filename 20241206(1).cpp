#include<stdio.h>
bool isprime(int n)
{
	if(n==1)
		return false;
	for(int i=2;i<=n;i++)
		if(n%i==0)
			return false;
	return true;
 } 
int main()
{
	int n;
	scanf("%d",&n);
	if(isprime(n))
		printf("%d:�Ҽ��̴�",n);
	else
		printf("%d:�Ҽ��� �ƴϴ�",n);
			return 0;
}
