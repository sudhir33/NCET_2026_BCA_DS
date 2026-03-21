#include<stdio.h>
#include<stdlib.h>
struct Array{
	int arr[100];
	int size;
};
typedef struct Array ARRAY;
void print(ARRAY *arr1)
{
	int i;
	for(i=0;i<arr1->size;i++)
	{
		printf("%d ",arr1->arr[i]);
	}
	printf("\n");
}
void insert(ARRAY *arr1,int v)
{
	arr1->arr[arr1->size]=v;
	arr1->size+=1;
	
}
void delet(ARRAY *arr1,int ind)
{
	if(ind>=arr1->size)
	{
		printf("Invalid index position\n");
		return;
	}
	int i;
	for(i=ind;i<arr1->size-1;i++)
	{
		arr1->arr[i]=arr1->arr[i+1];
	}
	arr1->size-=1;
}
int main()
{
	int n;
	ARRAY *arr1;
	arr1=(ARRAY*)malloc(sizeof(ARRAY));
	scanf("%d",&n);
	arr1->size=n;
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1->arr[i]);
	}
	int ch;
	while(1)
	{
		printf("1.Insert 2.Delete 3.Display 4.Exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			int v;
			scanf("%d",&v);
			insert(arr1,v);
		}
		else if(ch==2)
		{
			int ind;
			scanf("%d",&ind);
			delet(arr1,ind);
		}
		else if(ch==3)
		{
			print(arr1);
		}
		else if(ch==4)
		{
			break;
		}
		else
		{
			printf("invalid option\n");
		}
	}
	free(arr1);
}
