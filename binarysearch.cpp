#include <stdio.h>


int binarySearch(int *arr, int obj, int len)
{
	int low = 0, high = len-1;
	
	while(low <= high)
	{
		int mid = low + (high-low) / 2; // avoid overflow
		
		if(arr[mid] < obj)
			low = mid+1;
		else if(arr[mid] > obj)
			high = mid-1;
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
	
	scanf("%d", &num);
	idx = binarySearch(arr, num, sizeof(arr)/sizeof(int));
	if(idx == -1)
		printf("Not found.\n");
	else
		printf("Find %d at %d.", num, idx);
	
	return 0;
}
