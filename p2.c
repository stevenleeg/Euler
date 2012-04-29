#include <stdio.h>

int main() {
    // Create an array to store the last two digits
    int last[2] = {1, 2};
    int fib = 0;
    int sum = 2;

    while(fib < 4000000) {
    /*while(fib <= 10) {*/
        fib = last[0] + last[1];
        /*printf("%d + %d = %d\n", last[0], last[1], fib);*/
        last[0] = last[1];
        last[1] = fib;

        if(fib % 2 == 0) sum += fib;
    }

    printf("The result is %d\n", sum);
}
