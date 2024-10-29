#include <stdio.h>

void right_aligned_pyramid_for(int N) {
    for (int i = 1; i <= N; i++) { // For each row
        for (int j = 0; j < N - i; j++) { // Print spaces
            printf(" ");
        }
        for (int j = 0; j < i; j++) { // Print asterisks
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int N = 10; // Example input
    right_aligned_pyramid_for(N);
    return 0;
}

