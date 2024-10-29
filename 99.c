#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // إعداد البذرة العشوائية باستخدام الوقت الحالي
    srand(time(0));

    // توليد إحداثيات الكنز العشوائية
    int x = rand() % 10;  // يولد عددًا عشوائيًا بين 0 و9 لإحداثيات x
    int y = rand() % 10;  // يولد عددًا عشوائيًا بين 0 و9 لإحداثيات y

    // البحث عن الكنز في الشبكة
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == x && j == y) {
                printf("Hurrah! I have found the hidden treasure at (%d, %d)\n", i, j);
                return 0;  // إنهاء البرنامج بعد العثور على الكنز
            }
        }
    }

    return 0;
}
