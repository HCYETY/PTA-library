#include <stdio.h>

void heapify(int tree[], int n, int i) {
	if(i >= n) {
		return;
	}
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int max = i;
	if(left<n && tree[left]>tree[max]) {
		max = left;
	}
	if(right<n && tree[right]>tree[max]) {
		max = right;
	}
	if(max != i) {
		swap(tree, max, i);
		heapify(tree, n, max);
	}
}
void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main()
{
	int tree[] = {4, 10, 3, 5, 1, 2};
	int n=6;
	heapify(tree, n, 0);
	int i;
	for(i=0; i<n; i++) {
		printf("%d\n", tree[i]);
	}
	return 0;
}
