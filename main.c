#include <stdio.h>
#include "squares_count.h"

int main() {
    int n;

    while (1) {
        n = getNFromUser();  // Get the value of n from the user

        if (n == 0) {    // Check if the user entered 0, indicating they want to exit the program
            printf("Exiting the program.\n");
            break;
        }

        if (n <= 0) {  // Check if the user entered a non-positive integer
            printf("Please enter a positive integer for n.\n");
        } else {   // Calculate the number of squares using the countSquares function
            unsigned long long result = countSquares(n);
            printf("For n = %d, the number of squares is: %llu\n", n, result);
        }
    }

    return 0;
}

