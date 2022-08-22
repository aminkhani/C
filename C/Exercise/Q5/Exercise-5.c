#include <stdio.h>
int	findElement(int [], int );
int main(){ 
	int arr[20]; 
	int item, pos;
	printf("Enter a array !!BUT use space Not Enter!! : ");
	for(int i = 0; i < 20; i++){
		if (getchar() == '\n')
			break;
		scanf("%d", &arr[i]);
	}	
	scanf("%d", &item); 
	pos = findElement(arr, item); 
	if(pos == -1) 
		printf("No\n"); 
	else 
		printf("Yes\n");
} 
int	findElement(int a[], int item){ 
	int pos = -1; 
	for(int i = 0; i < 20; i++) { 
		if(a[i] == item) { 
			pos = i; 
			break; 
		} 
	} 
	return pos; 
} 
