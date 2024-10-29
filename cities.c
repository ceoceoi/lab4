#include <stdio.h>

#define NUM_CITIES 10

int main() {
    int populations[NUM_CITIES]; // Array to store the populations
    int sum = 0;
    int max = 0;
    int min = 0;

    // Input populations
    printf("Enter the population of %d cities:\n", NUM_CITIES);
    for (int i = 0; i < NUM_CITIES; i++) {
        printf("City %d: ", i + 1);
        scanf("%d", &populations[i]);
        sum += populations[i]; // Accumulate the sum for average calculation

        // Initialize max and min
        if (i == 0) {
            max = populations[i];
            min = populations[i];
        } else {
            // Update max and min
            if (populations[i] > max) {
                max = populations[i];
            }
            if (populations[i] < min) {
                min = populations[i];
            }
        }
    }

    // Print populations in reverse order
    printf("\nPopulation in reverse order:\n");
    for (int i = NUM_CITIES - 1; i >= 0; i--) {
        printf("City %d: %d\n", i + 1, populations[i]);
    }

    // Print maximum and minimum population
    printf("\nMaximum population: %d\n", max);
    printf("Minimum population: %d\n", min);

    // Calculate and print average population
    double average = (double)sum / NUM_CITIES;
    printf("Average population: %.2f\n", average);

    return 0;
}

