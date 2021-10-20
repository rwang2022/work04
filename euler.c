#include <stdio.h>

int prob1() {
    int sum = 0;
    int limit = 1000;
    for (int i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
        // printf("%d",i);
    }
    printf("%d\n",sum);
}

int prob6() {
    int n = 100;
    int sum_of_squares = 0;
    int square_of_sum = 0;
    for (int i = 1; i <= n; i++) {
        // printf("i is %d\n", i);
        sum_of_squares += i*i;
        square_of_sum += i;
    }
    square_of_sum = square_of_sum * square_of_sum;
    int diff = square_of_sum - sum_of_squares;
    printf("%d\n", diff);
}

