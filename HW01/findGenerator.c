#include <stdio.h>
#include <stdbool.h>

int power(int, int);

//This program takes an inputted prime number p and finds the first 
//integer that generates Z_p. 
int main()
{
    
    int p;
    bool isGenerator = true;
    int generator = 2;
    int test;

    printf("Enter a prime number: ");
    scanf("%d", &p);

    //WHILE loop begins testing generators at 2 and determines if 
    //generator^r is equal to 1. If so, it is not a generator and the 
    //next integer is tested. if generator^r != one for the given conditions
    //then we can say it is a generator 
    while (isGenerator)
    {

	for (int r = 1; r < p - 1; r++)
	{
	    test = power(generator, r);
	    if (test % p == 1)
	    {
		isGenerator = false;
	    }
	}
	
	if (isGenerator)
	{
	    printf("%d is a generator of Z_%d\n", generator, p);
	    return 0;
	}
	else
	{
	    generator += 1;
	    isGenerator = true;
	}
    }
			    
    return 0;
}

//Basic function to compute the power of two integers
int power(int base, int exp) 
{
    for (int i = 1; i < exp; i++)
    {	
	base *= base;
    }
    return base;

}
