#include <stdio.h>
#include <assert.h>
#include "squares_count.h"

// Function to run various test cases for countSquares function
void runTests() {
    // Test case 1: n = 1
    assert(countSquares(1) == 1);

    // Test case 2: n = 2
    assert(countSquares(2) == 5);

    // Test case 3: n = 3
    assert(countSquares(3) == 14);

    // Test case 4: n = 1000
    assert(countSquares(3) == 333833500);
    
    // Print a message if all tests pass
    printf("All tests passed successfully!\n");
}

// Main function for running tests
int main() {
    runTests();
    return 0;
}

