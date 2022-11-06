/*
 * Quick_Sort.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Alaa
 */

#include "Sorting.h"
void quick_sort(int arr[],int low, int high){
	if(low < high ){
		int pivot_index = partition(arr,low,high);
		quick_sort(arr,low,pivot_index-1 );
		quick_sort(arr,pivot_index +1 ,high );
	}

}

int partition(int arr[],int low,int high){
	int pivot = arr[low];
	int i = low;
	for(int j= low+1 ; j<=high ; j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[j],&arr[i]);

		}
	}
	swap(&arr[i], &arr[low]);
	return i;
}
