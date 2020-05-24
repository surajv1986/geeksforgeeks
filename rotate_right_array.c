#include <stdio.h>
#include <stdlib.h>

#define MAX_SZ 10000000

int a[MAX_SZ], shifted[MAX_SZ];

int rotate_right_array_n(int a[],int arr_sz,int rotation_amt)
{
    int new_index, old_index;
    
    for (old_index = 0; old_index < arr_sz; old_index++) {
        new_index = (old_index + arr_sz - rotation_amt) % arr_sz;
	printf(" old = %d new = %d\n", old_index, new_index);
        shifted[new_index] = a[old_index];       
    }
    for (old_index = 0; old_index < arr_sz; old_index++) {
 	  printf("%d ", shifted[old_index]);
    }
    printf("\n");
    printf("old_array[3] = %d new_array[0] = %d\n", a[3], shifted[0]);    
}
int main(void) {
    
    int i = 0, j = 0, arr_sz = 0, rotation_amt, test_cases;
    
    scanf("%d", &test_cases);
    while (i < test_cases) {
        scanf("%d", &arr_sz);
        scanf("%d", &rotation_amt);
	for (j = 0; j < arr_sz; j++)
		scanf("%d", &a[j]);
        rotate_right_array_n(a, arr_sz, rotation_amt);
        i++;
    }
    printf("\n");
}	
