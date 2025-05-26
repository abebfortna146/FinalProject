#include <stdio.h>

int main() {
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    
    if (i > 0) {
        if (i % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
