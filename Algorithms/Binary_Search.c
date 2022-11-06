/*
 * Binary_Search.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Alaa
 */

int binary_search(int arr[], int key,int low, int high ){

   if(high >= low){
    int mid = (low+high)/2;
   if(key> arr[mid] )
	  return binary_search(arr, key, mid +1 ,high );
    if(key < arr[mid])
	  return binary_search(arr,key,low,mid-1);
    return mid;
   }
   return -1;

}
