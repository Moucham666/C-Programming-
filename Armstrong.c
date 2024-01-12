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
