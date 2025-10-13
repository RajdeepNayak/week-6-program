#include <stdio.h>

int main() {
    int number, originalNumber;
    int reversedNumber = 0;
    int sumOfDigits = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
     while (number > 0) {
        remainder = number % 10;
         reversedNumber = reversedNumber * 10 + remainder;
         sumOfDigits = sumOfDigits + remainder;
          number = number / 10;
           }

    printf("Original number: %d\n", originalNumber);
    printf("Reversed number: %d\n", reversedNumber);
    printf("Sum of digits: %d\n", sumOfDigits);

    return 0;
}
