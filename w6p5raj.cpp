#include <stdio.h>

int main() {
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
     if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    } if (n >= 1) {
        printf("%d", t1);
    }
    if (n >= 2) {
        printf(", %d", t2);
    }
  for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
