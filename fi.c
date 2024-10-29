#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int rgb[SIZE][SIZE][3]; // 3D array for RGB values
    int grayscale[SIZE][SIZE]; // 2D array for grayscale values

    // Generate random RGB values
    srand(time(NULL)); // Seed random number generator
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            rgb[i][j][0] = rand() % 256; // Red
            rgb[i][j][1] = rand() % 256; // Green
            rgb[i][j][2] = rand() % 256; // Blue
        }
    }

    // Convert to grayscale
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grayscale[i][j] = (0.299 * rgb[i][j][0] + 0.587 * rgb[i][j][1] + 0.114 * rgb[i][j][2]);
        }
    }

    // Print RGB values
    printf("RGB Values:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("(%d, %d, %d) ", rgb[i][j][0], rgb[i][j][1], rgb[i][j][2]);
        }
        printf("\n");
    }

    // Print Grayscale values
    printf("\nGrayscale Values:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", grayscale[i][j]);
        }
        printf("\n");
    }

    return 0;
}

