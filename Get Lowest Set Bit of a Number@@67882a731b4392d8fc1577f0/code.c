// Your code here...#include <stdio.h>

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
    printf("Enter a number: ");
    scanf("%d", &number);

    int position = findLowestSetBitPosition(number);
    if (position != -1) {
        printf("The position of the lowest set bit is: %d\n", position);
    } else {
        printf("No set bit found in the number.\n");
    }

    return 0;
}
