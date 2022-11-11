/*
 * Bubble_Sort.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Alaa
 */


#include "Sorting.h"

void Bubble_Sort(int arr[], int arr_length){
int sort_flag = 0;
	for(int i =0 ; i <arr_length ; i++){
		  for(int j = 0 ; j < arr_length-1-i ; j++){
			  if(arr[j] > arr[j+1]){
				  swap(&arr[j] , &arr[j+1]);
				  sort_flag = 1;
			  }
		  }
		  if(!sort_flag)
			  return;

	 }
}

