

/*int main() 
{ 
int a[6]={4,9,8,6,2,5}; 
int i; 
printf("%ld\n",sizeof(a)); 
for(i=5;i>=0;i--) 
printf("%d ",a[i]); 
} */

/*#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}  */

// C Code to convert Decimal number into Binary

#include <stdio.h>

void decToBinary(int n)
{
	int biNum[10];

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
	int n = 12;
	decToBinary(n);
	return 0;
}

