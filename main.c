#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int num)
{
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0) {
			return false;
		}
	}
	
	return true;
}

int CountPrimeBF(int num)
{
	int count = 0;
	for (int i = 2; i < num; i++)
	{
		if (IsPrime(i)) {
			count = count + 1;
		}
	}
	
	return count;
}

int CountPrime(int n)
{
	int *map = (int *)malloc(sizeof(int) * n);
	if (map == NULL) {
		return 0;
	}
	// 假设所有数都是素数， 1 表示素数 0 表示合数
	memset(map, 1, sizeof(int) * n);
	map[0] = 0;
	map[1] = 0;

	for (int i = 2; i < n; i++)
	{
		if (map[i] == 0 && IsPrime(i)) {

		}
		
	}
	
}

int main()
{
	printf("Hello\n");

	int res = CountPrime(2);
	printf("%d\n\n", res);

	res = CountPrime(3);
	printf("%d\n\n", res);

	res = CountPrime(4);
	printf("%d\n\n", res);
	res = CountPrime(6);
	printf("%d\n\n", res);
	res = CountPrime(7);
	printf("%d\n\n", res);

	res = CountPrime(100);
	printf("%d\n\n", res);
}

