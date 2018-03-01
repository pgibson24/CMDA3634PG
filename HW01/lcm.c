#include <stdio.h>

int gcd(int, int);
//Program calculates the least common multiple of two integers
//and utilizes the gcd function 
int main() 
{
    int a, b, lcm;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    lcm = (a * b) / gcd(a,b);

    printf("The least common multiple of %d and %d is %d\n", a, b, lcm);

    return 0;
}

int gcd(int a, int b)
{
    if (b != 0)
        
        gcd(b, a % b);
    else
        return a;
}

