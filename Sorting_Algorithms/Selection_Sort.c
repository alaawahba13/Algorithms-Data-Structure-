/*
 * Selection_Sort.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Alaa
 */


#include "Sorting.h"
void selection_sort(int arr[], int arr_length){
int min_index=0;

  for(int i =0 ; i <arr_length ; i++){
	  min_index = i;
     for(int j = i+1 ; j < arr_length ; j++){ // find the min element
        if(arr[j]<arr[min_index]){
           min_index = j ;
     }
     }
      // swap with the first element
     swap(&arr[i], &arr[min_index]);
  }
}

void swap(int *num1 , int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
