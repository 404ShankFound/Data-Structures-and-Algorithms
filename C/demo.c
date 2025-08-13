#include <stdio.h>
#include <math.h> // Required for sqrt() function

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    if (number <= 3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0; // Multiples of 2 or 3 (except 2 and 3 themselves) are not prime
    }

    // Check for factors from 5 onwards, optimizing by checking 6k +/- 1
    for (int i = 5; i * i <= number; i = i + 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0; // If divisible by i or i+2, it's not prime
        }
    }
    return 1; // If no divisors found, the number is prime
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}