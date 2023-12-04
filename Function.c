//Function to check a prime number
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
  
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
//Function to check a Armstrong number.
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, n = 0, sum = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        sum += pow(originalNum % 10, n);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d %s an Armstrong number.\n", number, isArmstrong(number) ? "is" : "is not");

    return 0;
}
// Function to to print sum and product of digits of an integer.
#include <stdio.h>

void sumAndProductOfDigits(int num) {
    int sum = 0, product = 1;

    while (num) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    printf("Sum: %d\nProduct: %d\n", sum, product);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    sumAndProductOfDigits(number);

    return 0;
}
//Function to swap values of two variables.
#include <stdio.h>

void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
//Function to check perfect numbers.
#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0)
            sum += (i == num / i) ? i : i + num / i;

    return (sum == num);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d %s a perfect number.\n", number, isPerfect(number) ? "is" : "is not");

    return 0;
}

