/*
fact of n

n=6  
6 *5 *4*3*2*1

n=9
9*8*7*6*5*4*3*2*1


one i/p
o/p one




*/

#include<stdio.h>

int findFact(int  num)
{
	if(num==1)
	{
		return 1;
	}
	return num*findFact(num-1);
}
int main()
{
	int num;
	scanf("%d",&num);
	int fact;
	fact=findFact(num);//  fun name
	printf("\n%d",fact);// 
	return 0;
}
/*
5 points
1. fun name          findFact
2. how many args      1
3. data type of that args    int
4. is the function has return value   yes
5. what is return type    int  
*/













