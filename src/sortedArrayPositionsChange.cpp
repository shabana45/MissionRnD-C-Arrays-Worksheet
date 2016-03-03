/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{

	if (Arr == '\0' || len <= 0)
		Arr = NULL;
	else
	{
		int i,x = -1, y = -1;
		for (i = 0; i < len - 1; i++){
			if (Arr[i] > Arr[i + 1] && x == -1)
				x = i;
			if (x >= 0){
				if (Arr[i] > Arr[i + 1])
					y = i + 1;
			}
		}
		if (x >= 0 && y >= 0){
			Arr[x] = Arr[x] ^ Arr[y];
			Arr[y] = Arr[x] ^ Arr[y];
			Arr[x] = Arr[x] ^ Arr[y];
		}
	}
	return NULL;
}