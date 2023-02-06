#include "fibonacci.h"


unsigned long long fibonacci(int number)
{
	unsigned long long* arr = new unsigned long long[number];
	arr[0] = 1;
	arr[1] = 1;
	unsigned long long res = 0;

	for (int i = 2; i < number; ++i)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	
	res = arr[number - 1];

	delete[] arr;
	arr = nullptr;

	return res;
}
