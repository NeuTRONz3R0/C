#include <stdio.h>

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
int main(void)
{
	int arr[] = { 1, 3, 7, 14, 73 };
	int x = 7;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = search(arr, n, x);
	(result == -1)
		? printf("Element Not_Found")
		: printf("Element fund at index %d", result);
	return 0;
}
