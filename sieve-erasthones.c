/* list all prime numbers uptil hundred using sieve of erasthones */
#include<stdio.h>
#include<stdbool.h>

#define SZ 100
long int var[SZ];

long int choose_next_x(long int prevx)
{
	long int i = 0, new_x = -1;

	for (i = 0; i < SZ; i++) {
		if ((i > prevx) && (var[i] == 0) ) {
			new_x = i;
			break;	
		}
	}

	return new_x;
}
int main(void)
{
	long int x = 1, i = 0, j = 2, k = 0;
	
	i = 0;
	for (x = 2; x < SZ;) {
		for (i = 0; i < SZ; i++) {
			k = x * (x + i);
			if (k < SZ) {
				var[k] = 1;
			}
		}
		x = choose_next_x(x);
		if (x == -1)
			break;
	}
	for (i = 0; i < SZ; i++) {
		if (var[i] == 0)
			printf("i =  %ld var = %ld\n", var[i], i);
	}


}
