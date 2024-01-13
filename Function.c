/*1. Function to print sum and product of digits of an integer*/
#include <stdio.h>

void sum_and_product_of_digits(int num, int *sum, int *product) {
    *sum = 0;
    *product = 1;
    
    while (num) {
        int digit = num % 10;
        *sum += digit;
        *product *= digit;
        num /= 10;
    }
}

int main() {
    int num, sum_digits = 0, product_digits = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    sum_and_product_of_digits(num, &sum_digits, &product_digits);

    printf("Sum of digits: %d\n", sum_digits);
    printf("Product of digits: %d\n", product_digits);

    return 0;
}

/*2. Write a function to print fibonacci series using recursion and iteration*/
#include <stdio.h>

int fibonacci_recursive(int n) {
    return (n <= 1) ? n : fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

void fibonacci_iterative(int n) {
    int a = 0, b = 1;

    for (int i = 0; i < n; ++i) {
        printf("%d, ", a);
        b = a + b;
        a = b - a;
    }
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series (recursive): ");
    for (int i = 0; i < terms; ++i) {
        printf("%d, ", fibonacci_recursive(i));
    }

    printf("\n");

    printf("Fibonacci series (iterative): ");
    fibonacci_iterative(terms);

    return 0;
}

/*3. *Write a function to to find GCD of two numbers using recursion and iteration.*/

#include <stdio.h>

int gcd_recursive(int a, int b) {
    return (b == 0) ? a : gcd_recursive(b, a % b);
}

int gcd_iterative(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD (recursive): %d\n", gcd_recursive(num1, num2));
    printf("GCD (iterative): %d\n", gcd_iterative(num1, num2));

    return 0;
}

/*4.Write a function to to find factorial of a positive integer using recursion and iteration.*/

#include <stdio.h>

int factorial_recursive(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial_recursive(n - 1);
}

int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factorial (recursive): %d\n", factorial_recursive(num));
    printf("Factorial (iterative): %d\n", factorial_iterative(num));

    return 0;
}


