/*
 * HeapSort.c
 *
 *  Created on: Nov 10, 2022
 *      Author: Alaa
 */
#include "Sorting.h"
void MaxHeapify(int arr[], int n, int i){
	int left = 2*i +1;
	int right = 2*i;
	int max = i;
	if((left< n) && (arr[left] > arr[i]))
		max = left;
	if((right< n) && (arr[right] > arr[max]))
			max = right;
	if(max != i ){
		swap(&arr[i], &arr[max]);
		MaxHeapify(arr, n, max);
	}
}

void buildHeap(int arr[], int n){
	for(int i=((n/2) -1); i>=0 ; i--){
		MaxHeapify(arr, n, i);
	}
}

void HeapSort(int arr[], int n){
	buildHeap(arr, n);
	int heap_size = n;
	for(int i = n -1 ; i >=1 ; i--){
		swap(&arr[i], &arr[0]);
		heap_size--;
		MaxHeapify(arr, heap_size, 0);
	}
}
