#include <stdio.h>

int main() {
    int numbers[] = {14, 15, 2, 11, 507};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += numbers[i];
    }
    printf("Sum: %d\n", result);
    return 0;  
}