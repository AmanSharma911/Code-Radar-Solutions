#include <stdio.h>

int findLowestSetBitPosition(int number) {
    int position = 1;
    while (number > 0) {
        if (number & 1) {
            return position;
        }
        number >>= 1;
        position++;
    }
    return -1; // Return -1 if no set bit is found
}

int main() {
    int number;

    scanf("%d", &number);

    int position = findLowestSetBitPosition(number);
    if (position != -1) {
        printf("%d\n", position);
    } else {
        printf("");
    }

    return 0;
}
