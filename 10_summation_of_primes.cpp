#include <stdio.h>


int a[2000010];
int main()
{
	void construct_sieve();

	construct_sieve();

	long long int sum = 0;

	for(int i=1;i<=1999999;++i)
	{
		if(a[i] == 0)
		{
			sum = sum + (i+1);
		}
	}

	printf("%lld\n",sum );
} 


void construct_sieve()
{	

	for(long long int i=2;i<=2000009;++i)
	{	
		if(a[i-1] == 1)
		{
			continue;	//If not prime, then no need to evaluate
		}

		long long int check = 2;
		long long int temp = check*i;

		while(temp <= 2000009)
		{
			a[temp-1] = 1;	//1 means not prime
			check++;
			//temp = temp+check;
			temp = check*i;
		}
	}
}
