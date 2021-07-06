#include<stdio.h>
#include<limits.h>
int main()
{
	int i,j;
	long int n[10000];
	//printf("enter the numbers:\n");
	for(i=0; i<10000; i++)
	{
		scanf("%ld\n",&n[i]);
	}
	for(i=0; i<10000; i++)
	{
		if(n[i]==42)
		{
			break;
		}
		else
		{
			printf("%ld\n",n[i]);
		}
	}
	return 0;
}
