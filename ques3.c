#include <stdio.h>

void decToBinary(int n)
{
	int biNum[32];

	int i = 0;
	while (n > 0) 
    {
		biNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		printf("%d", biNum[j]);
}

int main()
{
	int n = 18;
	decToBinary(n);
	return 0;
}

