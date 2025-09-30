#include <stdio.h>

int main() {
    int batteryLevel;

    printf("Enter battery percentage: ");
    scanf("%d", &batteryLevel);

    if (batteryLevel <= 20) {
        printf("?? Battery Low! Please charge your device.\n");
    } else if (batteryLevel > 20 && batteryLevel <= 50) {
        printf("?? Battery is okay, but keep an eye on it.\n");
    } else {
        // No message shown above 50%
    }

    return 0;
}
