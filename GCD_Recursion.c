#include<stdio.h>
int find_gcd(int a,int b)// 92 48//   48  44 // 44 4// 4 0
{
	if(b==0)// a=4 b=0
	{
		return a;// 4
	}
	int temp;
	if(a>b)// 44>4
	{
		temp=a;//44
		a=b;// 4
		b=temp;// 44
	}
	return find_gcd(a,b%a);// find(48,44)// find(44,4)// find(4,0)
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
