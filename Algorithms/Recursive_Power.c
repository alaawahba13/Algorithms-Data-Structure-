/*
 * Recursive_Power.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Alaa
 */


int recursive_pow(int n, int pow){
	if(pow == 1)
		return n;
	else if( pow %2 ==0 ){
		int y = recursive_pow(n,pow/2);
		return y*y;
	}
	else if( pow %2 !=0){
		int y = recursive_pow(n ,(pow-1)/2);
		return y*y*n;
	}
	return 1;
}
