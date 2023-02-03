#include "fibonacci.h"


unsigned long long fibonacci(int number)
{
	unsigned long long arr[] = {1, 1};

	for (int i = 3; i <= number; ++i)
	{
		arr[i % 2] = arr[0] + arr[1];
	}

	return arr[number % 2];
}
