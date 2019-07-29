#include <stdio.h>
#include <stdlib.h>

int bin_search(int arr[], int key, int size) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}


int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = bin_search(arr, key, size);
	if (ret == -1) {
		printf("找不到");

	}
	else {
		printf("找到了");
	}
	printf("\n");

	system("pause");
	return 0;
}