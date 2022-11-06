/*
 * Merge_Sort.c
 *
 *  Created on: Oct 18, 2022
 *      Author: Alaa
 */
#include "Sorting.h"

void merge(int arr[], int l, int m, int r) {
	int i = 0, j = 0, k = l;// size of new arrays
	int n1 = m - l + 1;       // assume left array is the bigger
	int n2 = r - m;
	printf("\n---%d %d %d\n",l,m,r);
	int arr1[n1], arr2[n2];
	// copy the original array into temp arrays
	for (i = 0; i < n1; i++)
		arr1[i] = arr[i+l];
	for ( j = 0; j < n2; j++)
		arr2[j] = arr[m + 1 + j];
	// merge two arrays
	 i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (arr1[i] <= arr2[j]) {

			arr[k] = arr1[i];
			i++;
		} else {
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = arr1[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = arr2[j];
		j++;
		k++;
	}

}
void mergesort(int arr[], int l, int r) {
   if(l<r){
	   int m = l+ (r-l) /2;
	   mergesort(arr, l, m);
	   mergesort(arr, m+1, r);
	   merge(arr,l,m,r);

   }
}
