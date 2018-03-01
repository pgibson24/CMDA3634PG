#include <stdio.h>

int gcd(int, int);
//Program to determine if two numbers are Coprime. 
//Two numbers are coprime if gcd(a,b) = 1
//Utilizes the gcd function to determine gcd
int main()
{
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    c = gcd(a, b);

    //Two numbers arer coprime if gcd = 1
    if (c == 1)
	printf("%d and %d are coprime.\n", a, b);
    else
	printf("%d and %d are not coprime.\n", a, b);

    return 0;

}

int gcd(int a, int b)
{
    if (b != 0)
        
        gcd(b, a % b);
    else
        return a;
}

