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
