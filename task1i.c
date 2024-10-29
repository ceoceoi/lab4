#include <stdio.h>

void right_aligned_pyramid_while(int N) {
    int i = 1;
    while (i <= N) {
        // Print spaces for right alignment
        int j = 0;
        while (j < N - i) {
            printf(" ");
            j++;
        }
        // Print asterisks
        j = 0;
        while (j < i) {
            printf("*");
            j++;
        }
        printf("\n"); // Move to the next line
        i++;
    }
}

int main() {
    int N = 10; // Example input
    right_aligned_pyramid_while(N);
    return 0;
}

