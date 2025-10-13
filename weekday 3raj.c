 #include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, sumOfCubes;

    printf("Armstrong numbers between 0 and 999 are:\n");

    for (num = 0; num <= 999; num++) {
        originalNum = num;
        sumOfCubes = 0;
         if (num >= 0 && num <= 9) {
            sumOfCubes = num;
        } else {
        	   while (originalNum > 0) {
                remainder = originalNum % 10;
                sumOfCubes += pow(remainder, 3); // Calculate cube of digit and add to sum
                originalNum /= 10;
            }
        }
         if (sumOfCubes == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
