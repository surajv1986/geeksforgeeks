#include <stdio.h>

#define SZ 10000000

long int num[SZ];

int find_missing_element(long int a[], long int sz)
{
    long int i = 0;
    long long int sum = 0, sum_actual = 0;
    long int missing_no = 0;
   
    while (i < (sz - 1)){
        sum += a[i];  
        i++;
    }
    sum_actual = sz * (sz + 1)/2;
    missing_no = sum_actual - sum;
    printf("%ld\n", missing_no);
    
    return 0;
}
int main() {
	
	int test_cases, i = 0;
	long int sz = 0, k = 0;
	
	scanf("%d", &test_cases);
	while (i < test_cases) {
	    scanf("%ld\n", &sz);
	    for (k = 0; k < (sz - 1); k++ ) {
	        scanf("%ld", &num[k]);
	    }
	    find_missing_element(num, sz);
	    i++;
	}
	return 0;
}
