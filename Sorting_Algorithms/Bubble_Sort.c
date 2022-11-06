/*
 * Bubble_Sort.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Alaa
 */


#include "Sorting.h"

void Bubble_Sort(int arr[], int arr_length){
int sort_flag = 0;
	for(int i =0 ; i <arr_length-1 ; i++){
		  for(int j = i+1 ; j < arr_length ; j++){
			  if(arr[j] < arr[i]){
				  swap(&arr[j] , &arr[i]);
				  sort_flag = 1;
			  }
		  }
		  if(!sort_flag)
			  return;

	 }
}

