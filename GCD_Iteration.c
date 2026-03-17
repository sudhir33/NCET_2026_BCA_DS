#include<stdio.h>
int find_gcd(int a,int b)// 92 48//   48  44 // 44 4// 4 0
{
	int gcd=1,temp;
	while(b!=0)
	{
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		b=b%a;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int gcd;
	gcd=find_gcd(a,b);// fun call
	printf("%d",gcd);// o/p
	return 0;
}




/*
euclidean algo for gcd
a   b
48 64

48 64%48

48 16

16 48
16 0


russian peasent method for multiplication

collatz sequence

100-- 100      10

1-->   100   70










*/
