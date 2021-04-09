/*program to find a number from array elements.*/ 

#include<stdio.h>
#define MAX 20 

/*	function	:	readArray() 
	to read array elements. 
*/ 

void 	readArray(int a[],int size) 
{ 
	int i; 
	for(i=0;i< size;i++) 
	{ 
		printf("Enter %d element :",i+1); 
		scanf("%d",&a[i]); 
	} 
} 

/*	function	: findElement(), 
	to find an item from array elements. 
	return		: -1 for fail, 
			  position to success. 
*/ 
int	findElement(int a[],int size,int item) 
{ 
	int i,pos=-1; 
	for(i=0;i< size;i++) 
	{ 
		if(a[i]==item) 
		{ 
			pos=i; 
			break; 
		} 
	} 
	return pos; 
} 
 
int main() 
{ 
	int arr[MAX]; 
	int n,item,pos; 


	printf("\nEnter size of an Array :"); 
	scanf("%d",&n); 

	printf("\nEnter elements of Array 1:\n"); 
	readArray(arr,n); 
	 
	printf("Enter an item to find :"); 
	scanf("%d",&item); 
	 
	pos=findElement(arr,n,item); 
	if(pos==-1) 
		printf("\n%d does not exists in array.\n",item); 
	else 
		printf("\n%d find @ %d position.\n",item,pos);	 
	 

	printf("\n\n"); 
	return 0; 
} 
