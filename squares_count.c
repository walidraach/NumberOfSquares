#include "squares_count.h"
#include <stdio.h>

// Function to calculate the total number of squares for an n x n lattice
unsigned long long countSquares(int n) {
    return (unsigned long long)n * (n + 1) * (2 * n + 1) / 6;
}

// Function to get the value of n from the user
int getNFromUser() {
    int n;
    printf("Enter the value of n (enter 0 to exit): ");
    scanf("%d", &n);
    return n;
}

