/* 1.Addition of two numbers. */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The sum of the two numbers is: %d", c);
    return 0;
}
/* 2.Calculate the area of a triangle.  */

#include <stdio.h>
int main()
{
    int area, b, h;
    printf("Enter the breath and height of the triangle: ");
    scanf("%d %d", &b, &h);
    area = (1 * b * h) / 2;
    printf("The area of the triangle is: %d", area);
    return 0;
}
/* 3.Calculate the area and circumference of a circle. */

#include <stdio.h>

int main()
{
    float rad, area, circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = 3.14 * rad * rad;
    circum = 2 * 3.14 * rad;
    printf("The area of the circle is: %.2f \n", area);
    printf("The circumference of the circle is: %.2f \n", circum);
    return 0;
}
/* 4.Interchange two numebers without using third variable. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping  a = %d b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping a = %d b = %d", a, b);
    return 0;
}
/* 5.Calculate the average of 5 numbers. */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("The average of the above 5 numbers is: %d", avg);
    return 0;
}
/* 6.Enter a number and check whether it is positive or negative. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive no.", a);
    }
    else
    {
        printf("%d is a negative no.", a);
    }
    return 0;
}
/* 7.Enter a number and check whether it is positive or negative. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive no.", a);
    }
    else
    {
        printf("%d is a negative no.", a);
    }
    return 0;
}

/*  8.Enter a number and check whether it is greater than or less than or
    equal to 10. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 10)
    {
        printf("%d is equal to 10", a);
    }
    else if (a > 10)
    {
        printf("%d is greater than 10", a);
    }
    else
    {
        printf("%d is less than 10", a);
    }
    return 0;
}

/* 9.Larger of two numbers. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is larger than %d", a, b);
    }
    else
    {
        printf("%d is larger than %d", b, a);
    }
    return 0;
}

/* 10.Largest of three numbers. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the largest among all", a);
    }
    else if (b > c)
    {
        printf("%d is the largest among all", b);
    }
    else
    {
        printf("%d is the largest among all", c);
    }
    return 0;
}

/* 11.Smaller of two numebers. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        printf("%d is smaller than %d", a, b);
    }
    else
    {
        printf("%d is smaller than %d", b, a);
    }
    return 0;
}

/* 12.Enter a number and display it is either even or odd. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even.", a);
    }
    else
    {
        printf("%d is odd.", a);
    }
    return 0;
}
/* 13.Calculate the average of 5 numbers. */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("The average of the above 5 numbers is: %d", avg);
    return 0;
}
/* 14.Enter three numbers and display the second largest number. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%d is the second largest among all.", b);
        }
        else
        {
            printf("%d is the second largest among all.", c);
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            printf("%d is the second largest among all.", a);
        }
        else
        {
            printf("%d is the second largest among all.", c);
        }
    }
    else
    {
        if (a > b)
        {
            printf("%d is the second largest among all.", a);
        }
        else
        {
            printf("%d is the second largest among all.", b);
        }
    }
    return 0;
}
/*  15.Enter a number and check to which group it will belong. The groups are
    0 - 9, 10 - 19, 20 - 29. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a >= 0 && a <= 9)
    {
        printf("%d belongs to 0-9 group.", a);
    }
    else if (a >= 10 && a <= 19)
    {
        printf("%d belongs to 10-19 group.", a);
    }
    else if (a >= 20 && a <= 29)
    {
        printf("%d belongs to 20-29 group.", a);
    }
    else
    {
        printf("Enter a number between 0 and 29.");
    }
    return 0;
}

/* 16.Enter a character and display it either vowel or consonant. */
#include <stdio.h>

int main() {
    char ch, lowercase, uppercase;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the entered character is a vowel (either lowercase or uppercase)
    lowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase || uppercase) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
/* 17.Calulate the average of any five numbers. */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("The average of the five numbers is: %d", avg);
    return 0;
}
/* 18.Calculate S = 1 + 3 + 5 + 7 + 9 + 11. */

#include <stdio.h>
int main()
{
    int i, sum, a;
    for (i = 1; i <= 6; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &a);
        sum += a;
    }
    printf("The value of S is: %d", sum);
    return 0;
}

/* 19.Calculate S = 1 + 3 + 5 ....... + N. */

#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the N value: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("The value of S is: %d", sum);
    return 0;
}
/* 20.Reverse of a number. For example, 1234 will be 4321. */

#include <stdio.h>
int main()
{
    int n, rev = 0, rem = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("The reverse of the number is: %d", rev);
    return 0;
}
/* 21.Display the factors of a number. */

#include <stdio.h>
int main()
{
    int n, i, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factors of %d are: ", n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
/* 22.Calculate the factorial of a number. */

#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of is %d", fact);
    return 0;
}

/*  23.Check for prime number. */

#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}

/* 24.Display smallest and largest factor of a given number. */

#include <stdio.h>
int main()
{
    int i, n, small, large;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            small = i;
            break;
        }
    }
    for (i = n / 2; i >= 2; i--)
    {
        if (n % i == 0)
        {
            large = i;
            break;
        }
    }
    printf("Smallest number: %d", small);
    printf("\nLargest number: %d", large);
    return 0;
}
/* 25. Display all prime factors of a given number */

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d ", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}

/*26. Write a program to calculate and print the sum of the series 1-3+5-7+.......N.*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        int term = (2 * i + 1) * (i % 2 == 0 ? 1 : -1);
        sum += term;
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}

/*27. Enter a number and a base and convert the number into the given base.*/

#include <stdio.h>

void convertToBase(int number, int base) {
    if (number == 0) {
        printf("Converted number: 0\n");
        return;
    }

    int result[32];
    int index = 0;

    while (number > 0) {
        result[index++] = number % base;
        number /= base;
    }

    printf("Converted number: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    printf("\n");
}

int main() {
    int number, base;

    // Input: Enter a number and a base
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the base: ");
    scanf("%d", &base);

    // Call the conversion function
    convertToBase(number, base);

    return 0;
}

/*28.  Convert a binary number into its decimal equivalent.*/

#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    int binaryNumber;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));

    return 0;
}

/* 29.Calculate the frequency of digits in a number.*/

#include <stdio.h>

void calculateDigitFrequency(int number) {
    int frequency[10] = {0};  // Array to store digit frequencies

    while (number > 0) {
        int digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }

    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    calculateDigitFrequency(inputNumber);

    return 0;
}

/* 30. Calculate square root of a number. */

#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = sqrt(number);

    printf("Square root: %lf\n", result);

    return 0;
}
