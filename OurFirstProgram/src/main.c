#include <stdio.h>
// Pound sign for imports

// Main function is entry point for the program.
int main() { // Braces for function blocks
    int myFavoriteNumber = 0;

    printf("Please enter your favorite number\n");

    scanf("%d", &myFavoriteNumber);

    printf("You entered number: %d\n", myFavoriteNumber);

    return 0; // Returns 0 meaning no errors
    // C files compile into "dot O" files, which are linked together to create an executable.
    // Cleaning the folder deletes all the .o files and executables to make you recompile from the beginning.
}