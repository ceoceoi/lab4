#include <stdio.h>
#include <unistd.h> // For sleep function

int main() {
    int N; // Variable to store the number of minutes
    printf("Enter the number of minutes: ");
    scanf("%d", &N);

    for (int minute = 0; minute <= N; minute++) {
	for (int second = 0; second < 60; second++) {
            printf("%02d : %02d\n", minute, second);
            sleep(1); // Wait for 1 second

            if (minute == N && second == 59) {
                break; // Exit the seconds loop
            }
        }
        if (minute == N) {
            break; // Exit the minutes loop
        }
    }

    return 0;
}

