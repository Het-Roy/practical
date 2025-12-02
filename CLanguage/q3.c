//print the fibonaccci sequrncee up to n terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}