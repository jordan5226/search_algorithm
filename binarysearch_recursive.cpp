#include <stdio.h>


int binarySearch(int *arr, int obj, int low, int high)
{
	if(low <= high)
	{
		int mid = low + (high-low) / 2; // avoid overflow
		if(arr[mid] < obj)
			return binarySearch(arr, obj, mid+1, high);
		else if(arr[mid] > obj)
			return binarySearch(arr, obj, low, mid-1);
		else if(arr[mid] == obj)
			return mid;
	}
	return -1;
}


int main()
{
	int arr[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};
	int num = 0;
	int idx = 0;
	int len = 0;
	
	scanf("%d", &num);
	len = sizeof(arr)/sizeof(int);
	idx = binarySearch(arr, num, 0, len-1);
	if(idx == -1)
		printf("Not found.\n");
	else
		printf("Find %d at %d.", num, idx);
	
	return 0;
}
