/*
Sorting:

Selection sort: always we have to select maximum element 
                from unsorted list and swap with 
				last element in unsorted list.
  
n=7
i/p:
6 7 2 99 22 11 88 
0 1 2  3  4  5  6


pass1:  lastpos=6  maxind:3
6 7 2 88 22 11 99
0 1 2  3  4  5  6

pass2:
  lastpos=5  maxind:3
6 7 2 11 22 88 99
0 1 2  3  4  5  6

pass3:
  lastpos=4  maxind:4
6 7 2 11 22 88 99
0 1 2  3  4  5  6

pass4:
  lastpos=3  maxind:3
6 7 2 11 22 88 99
0 1 2  3  4  5  6


pass5:
  lastpos=2  maxind:1
6 2 7 11 22 88 99
0 1 2  3  4  5  6




pass6:
  lastpos=1  maxind:0
2 6 7 11 22 88 99
0 1 2  3  4  5  6





n=9

9 1 8 2 7 3 6 4 5
0 1 2 3 4 5 6 7 8

pass1: lastpos=8  maxpos=0  swap last and max
9 1 8 2 7 3 6 4 5
0 1 2 3 4 5 6 7 8

5 1 8 2 7 3 6 4 9
0 1 2 3 4 5 6 7 8

pass2: lastpos=7  maxpos=2
5 1 8 2 7 3 6 4 9
0 1 2 3 4 5 6 7 8

5 1 4 2 7 3 6 8 9
0 1 2 3 4 5 6 7 8

pass3: lastpos=6 maxpos=4
5 1 4 2 7 3 6 8 9
0 1 2 3 4 5 6 7 8

5 1 4 2 6 3 7 8 9
0 1 2 3 4 5 6 7 8

pass4: laspos=5  maxpos=4
5 1 4 2 3 6 7 8 9
0 1 2 3 4 5 6 7 8


pass5: laspos=4  maxpos=0
3 1 4 2 5 6 7 8 9
0 1 2 3 4 5 6 7 8

pass6: laspos=3  maxpos=2
3 1 2 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8

pass7: laspos=2  maxpos=0
2 1 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8

pass8: laspos=1  maxpos=0
1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8


Algorithm:

1. read n( n is size of array )
2. read n array elements
3. take lastindpos=n-1
4. repeat  from i=0 to n-1
    4.1 find maxindpos in unsorted array
	   (maximum element's index position )
	4.2 swap maxindpos with lastindpos
5. stop


*/
#include<stdio.h>
/*
6 5 4 8 9 2
0 1 2 3 4 5

maxval=9
maxpos=4
*/
/*
arr={5 1 7 2 6 3 4 8}
     0 1 2 3 4 5 6 7    lastindpos=6
*/
int findmaxpos(int *arr,int lastindpos)
{
	int maxval=arr[0];//maxval=5
	int maxpos=0;// maxpos=0
	int i;
	for(i=1;i<=lastindpos;i++)
	{
		if(arr[i]>maxval)// 4>7
		{
			maxval=arr[i];//maxval=7
			maxpos=i;//maxpos=2
		}
	}
	return maxpos;// 2
}

//n=8   arr={5 1 4 2 6 3 7 8}
//           0 1 2 3 4 5 6 7
void selectionSort(int *arr,int n)
{
	int i,lastindpos=n-1,maxindpos;// lastindpos=5
	int temp;
	for(i=0;i<n-1;i++)	//
	{
		maxindpos=findmaxpos(arr,lastindpos);// maxindpos=2
		// 
		//swap code
		temp=arr[maxindpos];//temp=8
		arr[maxindpos]=arr[lastindpos];//
		arr[lastindpos]=temp;//
		lastindpos--;//6
	}
}


int main()
{
	int n;
	scanf("%d",&n);// 8
	int arr[n],i;//arr[8] 0.. 7
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);// 8 1 7 2 6 3 4 5
	}
	selectionSort(arr,n);// fun call arr,8
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}






























