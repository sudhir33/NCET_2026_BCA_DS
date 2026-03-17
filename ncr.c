#include<stdio.h>
int fact(int  num)
{
	int i,res=1;
	for(i=num;i>=1;i--)
	{
		res=res*i;
	}
	return res;
}

int findNCR(int n,int r)
{
	int res;
	if(n>=r)
	{
		res=fact(n)/(fact(r)*fact(n-r));	
	}
	else
	{
		res=-1;
	}
	return res;
}
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);// 10 5
	int res;
	res=findNCR(n,r);// fun call
	printf("%d",res);
	return 0;
}
