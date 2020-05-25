/*A Program to demonstrate bubble sorting */
#include<stdio.h>

#define SIZE 100

int bubble_sort(int array[], int n)
{
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n ; j++) {
			if (array[i] > array[j]) {
				/* Swap elements */
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	return 0;
}
int main(void)
{
	int input_array[SIZE], n = 0, i = 0, ret = 0;

	printf("Enter the length of array to be entered\n");
	scanf("%d", &n);
	printf("Enter the integer array of n elements \n");
	for (i = 0; i < n; i++)
		scanf("%d", &input_array[i]);
	bubble_sort(input_array, n);
	printf("The sorted array is \n");
	for (i = 0; i < n; i++) {
		printf("%d", input_array[i]);
		printf(" ");
	}
	printf("\n");
	return 0;
}
