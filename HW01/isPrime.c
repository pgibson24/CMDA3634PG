#include <stdio.h>

//Program to determine if an integer is a prime number

int main()
{

    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);

    //FOR loop will begin at the number 2 and check the consecutive 
    //integers leading up to a to determine if any numbers divide a 
    for ( int i = 2; i < a; i++)
    {
	if (a % i == 0)
	{
	    printf("%d is not prime\n", a);
	    return 0;
	}
    }

    printf("%d is prime\n", a);
    return 0;
}
