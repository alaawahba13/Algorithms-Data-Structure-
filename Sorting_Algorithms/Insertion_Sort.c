/*
 * Insertion_Sort.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Alaa
 */

#include "Sorting.h"
void Insertion_Sort(int arr[], int arr_length) {
	int key;
	int prev_index;
	for (int i = 0; i < arr_length; i++) {
		key = arr[i];
		prev_index = i - 1;
		while (prev_index >= 0 && (key < arr[prev_index])){
			arr[prev_index+1] = arr[prev_index];
			prev_index--;

		}
		arr[prev_index + 1] = key;
	}
}

