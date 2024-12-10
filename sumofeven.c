#include <stdio.h>

int sum_of_even_digits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of even digits: %d\n", sum_of_even_digits(num));
    return 0;
}