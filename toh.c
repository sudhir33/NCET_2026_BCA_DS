#include<stdio.h>
void toh(int n,char S,char A,char D)
{
	if(n==1)
	{
		printf("Move disc 1 from %c to %c\n",S,D);
		return;
	}
	toh(n-1,S,D,A);
	printf("Move disc %d from %c to %c\n",n,S,D);
	toh(n-1,A,S,D);
}

int main()
{
	int n;
	scanf("%d",&n);// 3
	toh(n,'S','A','D');//
}
