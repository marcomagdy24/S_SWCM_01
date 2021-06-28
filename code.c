#include <stdio.h>

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    return 1;
}

int main()
{
    printf("Hello World\n");
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    printf("Factorial of %d = %ld", n, factorial(n));
    return 1;
    /*  EOD  */
}
