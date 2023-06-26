#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98;
}

int main() {
    int num = 42;
    printf("Before: %d\n", num);
    reset_to_98(&num);
    printf("After: %d\n", num);
    return 0;
}
