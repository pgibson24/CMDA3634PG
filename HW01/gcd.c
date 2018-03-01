#include <stdio.h>
int gcd(int, int);

//program computes the gcd of two inputted integers
int main()
{
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    c = gcd(a, b);

    printf("The greatest common divisor of %d and %d is %d\n", a, b, c);

    return 0;
}
//function computes the gcd of two integers by recursively checking 
//the modulus of two integers until a common divisor is found 
int gcd(int a, int b)
{
    if (b != 0)
	
	gcd(b, a % b);
    else
	return a;
}
