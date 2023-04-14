/*
 Program 1 : Given an array of integers, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following three lines:

	     Array is sorted in numSwaps swaps., where  is the number of swaps that took place.
	     First Element: firstElement, where  is the first element in the sorted array.
	     Last Element: lastElement, where  is the last element in the sorted array.
	     Hint: To complete this challenge, you must add a variable that keeps a running tally of all swaps that occur during execution.

	     Example

	     swap    a       
	     0       [6,4,1]
	     1       [4,6,1]
             2       [4,1,6]
	     3       [1,4,6]
	     The steps of the bubble sort are shown above. It took  swaps to sort the array. Output is:

	     Array is sorted in 3 swaps.  
	     First Element: 1  
	     Last Element: 6  
	     Function Description

	     Complete the function countSwaps in the editor below.

	     countSwaps has the following parameter(s):

	     int a[n]: an array of integers to sort Prints

	     Print the three lines required, then return. No return value is expected.

	     Input Format :
	     The first line contains an integer, , the size of the array .
	     The second line contains  space-separated integers .

	     Constraints

	     Output Format

	     Sample Input 0

	     STDIN   Function
	     -----   --------
	     3       a[] size n = 3
	     1 2 3   a = [1, 2, 3]
	     Sample Output 0

	     Array is sorted in 0 swaps.
	     First Element: 1
	     Last Element: 3
	     Explanation 0
	     The array is already sorted, so  swaps take place.

	     Sample Input 1

	     3
	     3 2 1
	     Sample Output 1

	     Array is sorted in 3 swaps.
	     First Element: 1
	     Last Element: 3
 */

#include<stdio.h>

int swap(int *arr, int k){
	
	int temp = arr[k];
	arr[k] = arr[k + 1];
	arr[k + 1] = temp;
}
int Bubble_Sort(int *arr, int size){
	
	int count = 0;
	for(int i = 0; i < size - 1; i++){
		
		for(int j = 0; j < size - i - 1; j++){
			
			if(arr[j] > arr[j + 1]){
				count++;
				swap(arr,j);
			}
			
		}
	}
	return count;
}
void main(){
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array : ");
	for(int i = 0; i < size; i++){
		
		scanf("%d",&arr[i]);
	}

	int count = Bubble_Sort(arr,size);
	printf("Array is sorted in %d swaps.\n",count);
	printf("First Element: %d\n",arr[0]);
	printf("Last Element: %d\n",arr[size-1]);
}
