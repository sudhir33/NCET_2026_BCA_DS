/*
Quick sort:
1. divide conquer
2. choose a povit  (last element)
3. L=0  H=n-1    
if n=13
4. L=0  H=12

loop: if i reaches H stop the itertion   i<H
	if arr[i]>arr[P]-->44>55     i++
	else:swap arr[i] and arr[j] j++ i++
		
swap arr[j] and arr[P]
divide into two parts  arr[L]--> arr[j-1],  arr[j+1]-->arr[H]
again call same quick sort





L                                    H
                                     P
10 22 33 11 23 15 25 44 55 99 77 66 65
0   1  2  3  4  5  6  7  8  9 10 11 12
                         j           i



pass2:
	L                     H
	                      P
	0   1  2  3  4  5  6  7
	10 22 33 11 23 15 25 44
	ij


pass3:
	L         H
	          P
	9  10 11 12
	99 77 66 65
	ij
	
	
	
step1:
L=0,H=8,P=8,i=0,j=0
L                         H	
0   1  2  3  4  5  6  7   8
55 22 33 40 23 15 25 44  34
ij                        P
	
step2:
arr[i]>arr[P]--> 55>34 i++

L                         H
                          P
0   1  2  3  4  5  6  7   8
55 22 33 40 23 15 25 44  34
j   i                      
	
step3:
arr[i]>arr[P]--> 22>34 false--> swap arr[i] and arr[j] j++ i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 55 33 40 23 15 25 44  34
   j   i                      
	
step4:
arr[i]>arr[P]--> 33>34 false--> swap arr[i] and arr[j] j++ i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 55 40 23 15 25 44  34
      j   i                 	

step5:
arr[i]>arr[P]--> 40>34 i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 55 40 23 15 25 44  34
      j      i                 	
	
step6:
arr[i]>arr[P]--> 23>34 false--> swap arr[i] and arr[j] j++ i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 23 40 55 15 25 44  34
          j     i     

step7:
arr[i]>arr[P]--> 15>34 false--> swap arr[i] and arr[j] j++ i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 23 15 55 40 25 44  34
             j     i     

step8:
arr[i]>arr[P]--> 25>34 false--> swap arr[i] and arr[j] j++ i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 23 15 25 40 55 44  34
                j     i     

step9:
arr[i]>arr[P]--> 44>34 i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 23 15 25 40 55 44  34
                j         i     
                
step10: i reaches last position. stop it then swap arr[j] and arr[p]
arr[i]>arr[P]--> 44>34 i++
L                         H
                          P
0   1  2  3  4  5  6  7   8
22 33 23 15 25 34 55 44  40
                j         i

now 34 is at exact position, where left subarray elements are
smallar than 34, right subarray are bigger than 34.
divide into 2 parts   arr[L] to arr[j-1] and arr[j+1] to arr[H]
        L           H
                    P
        0  1  2  3  4
part1: 22 33 23 15 25
       ij
    
step1:
i=0,j=0,L=0,H=4,P=4
if arr[i]>arr[P]-->22>25 false  arr[i] and arr[j] j++ i++
L           H
            P
0  1  2  3  4
22 33 23 15 25
   ij
   
step2:
if arr[i]>arr[P]-->33>25 true i++
L           H
            P
0  1  2  3  4
22 33 23 15 25
   j   i
   
step3:
if arr[i]>arr[P]-->23>25 false  arr[i] and arr[j] j++ i++
L           H
            P
0  1  2  3  4
22 23 33 15 25
      j   i
   
step4:
if arr[i]>arr[P]-->15>25 false  arr[i] and arr[j] j++ i++
L           H
            P
0  1  2  3  4
22 23 15 33 25
         j   i

step5:
i reaches H, stop it. swap arr[j] and arr[p]
L           H
            P
0  1  2  3  4
22 23 15 25 33
         j   i

step6:

L     H
      P
0  1  2        
22 23 15  
ij

step7:
if arr[i]>arr[p]    --> 22>15 i++
L     H
      P
0  1  2        
22 23 15  
j   i

step7:
if arr[i]>arr[p]    --> 23>15 i++
L     H
      P
0  1  2        
22 23 15  
j      i         

step8:
i reaches H, stop it , swap arr[j],arr[P]
L     H
      P
0  1  2  3   4   5
15 22 23 25 33  35   40 44 55








       L     H
       6  7  8
part2:55 44 40

40 44 55
 

*/
#include<stdio.h>
int partition(int *arr,int L,int H)
{
	int i,j,p;
	i=L,j=L,p=H;
	while(i<H)
	{
		if(arr[i]>arr[p])
		{
			i++;
		}
		else
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++,j++;
		}
	}
	int temp;
	temp=arr[j];
	arr[j]=arr[p];
	arr[p]=temp;
	return j;
}




void quicksort(int *arr,int L,int H)
{
	if(L<H)	
	{
		int j;
		j=partition(arr,L,H);// fun call
		quicksort(arr,L,j-1);
		quicksort(arr,j+1,H);
	}
}



int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);// L=0 H=n-1  fun call
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

















                
                
                


