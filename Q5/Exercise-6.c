#include <stdio.h> 
int SrchBinary(int arr[], int l, int r, int x) { 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
          if (arr[mid] == x) 
            return mid; 
          if (arr[mid] > x) 
            return SrchBinary(arr, l, mid - 1, x); 
        return SrchBinary(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
int main() { 
    int arr[10], n; 
    scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]); 
    int x = 10; 
    int result = SrchBinary(arr, 0, n - 1, x); 
    if(result == -1)
        printf("No\n");
    else
        printf("Yes\n");
}

/* 
... میخاسم به فارسی بنویسم که میریزه بهم ...
Binary Search: Search a sorted array by repeatedly dividing
the search interval in half. Begin with an interval covering the whole array.
If the value of the search key is less than the item in the
middle of the interval, narrow the interval to the lower half.
Otherwise narrow it to the upper half. Repeatedly check until 
the valueis found or the interval is empty.
*/
