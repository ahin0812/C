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
		printf("%d:소수이다",n);
	else
		printf("%d:소수가 아니다",n);
			return 0;
}
