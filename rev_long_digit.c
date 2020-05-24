#include<stdio.h>
#include<math.h>

int rev_digit(unsigned long long int dig, int len)
{
	int k, i = 0, res;
	unsigned long long int rev_digit = 0, temp;
	
	k = len;
	temp = dig;
	while (temp > 0) {
		res = temp % 10;
		rev_digit += res * pow(10, k);
		temp /= 10;
		k--;
	}
	printf("%llu\n", rev_digit);
}

int main(void)
{
	int test_cases, i = 0, len = 0; 
	unsigned long long int num = 0, temp;

	scanf("%d", &test_cases);
	while (i < test_cases) {
		len = 0;
		scanf("%llu", &num);
		temp = num;
		while (temp > 0) {
			len++;
			temp /= 10;
		}
		len = len - 1;
		rev_digit(num, len);
		i++;
	}

}
