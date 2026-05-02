#include <stdio.h>

int main() {
    int choice = 1;
    
    // 1 = Coffee
    // 2 = Tea
    
    switch (choice) {
        case 1:
            printf("You ordered Coffee\n");
            break;

        case 2:
            printf("You ordered Tea\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
