#include <stdio.h>

int rightmost_unset_bit_position(int n) {
    // Check if all bits are set
    if (n == ~0) {
        return -1;  // All bits are set
    }

    // Find the position of the rightmost unset bit
    int position = 1;
    int mask = ~n;  // Bitwise NOT of n (inverts all bits of n)

    // Loop through the bits of the mask
    while ((mask & 1) == 0) {
        mask >>= 1;  // Right shift the mask
        position++;   // Move to the next 
    }

    return position;
}

int main() {
    int n;

    // Test case input
  
    scanf("%d", &n);

    int result = rightmost_unset_bit_position(n);
    if (result == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
