#include <stdio.h>
#include <curses.h>

int isPrime(int x) {
    int i;
    for(i=2; i <= (x / 2); i++) {
        if(x % i == 0) {
            return 0;
        }       
    }

    return 1;
}

int main() {
    int largest = 1;
    int i;
    long long of = 600851475143;

    for(i = 1; i <= (of); i++) {
        printf("Scanning: %d Largest: %d\r", i, largest);
        if(of % i != 0) continue;
        of = of / i;
        if(isPrime(i)) largest = i;
    }

    printf("\nThe result is %d\n", largest);
}
